#  汇编学习笔记

##  一、常用工具使用

### 一、x86DeBug

![image-20230711160937256](C:\Users\admin\AppData\Roaming\Typora\typora-user-images\image-20230711160937256.png)

红色区域：汇编区域 

黄色区域：寄存器区域

紫色区域：内存区域

蓝色区域：堆栈区域

### 二、OD 

### 三、CE

### 四、IDE



## 二、寄存器

### 一、32位寄存器

| 寄存器 |           主要用途（并不是一定只能做下面这些事情）           | 编号 | 存储数据范围 |
| :----: | :----------------------------------------------------------: | :--: | :----------: |
|  EAX   |      累加器（Extended Accumulator）乘除指令默认使用EAX       |  0   | 0-0xFFFFFFFF |
|  ECX   |                          循环计数器                          |  1   | 0-0xFFFFFFFF |
|  EDX   |                             I/0                              |  2   | 0-0xFFFFFFFF |
|  EBX   |                         DS段数据指针                         |  3   | 0-0xFFFFFFFF |
|  ESP   |        堆栈指针（Extended Stack Pointer）用于寻找堆栈        |  4   | 0-0xFFFFFFFF |
|  EBP   | SS段的数据指针（Extended Frame Pointer）高级语言通过EBP引用堆栈中得函数参数和局部变量 |  5   | 0-0xFFFFFFFF |
|  ESI   | 字符串操作的源指针；SS段的数据指针（Extended Source Index）  |  6   | 0-0xFFFFFFFF |
|  EDI   | 字符串操作的目标指针；ES段的数据指针（Extended Destination Index） |  7   | 0-0xFFFFFFFF |

### 二、16位寄存器 

| 寄存器 |           主要用途（并不是一定只能做下面这些事情）           | 编号 | 存储数据范围 |
| :----: | :----------------------------------------------------------: | :--: | :----------: |
|   AX   |      累加器（Extended Accumulator）乘除指令默认使用EAX       |  0   |   0-0xFFFF   |
|   CX   |                          循环计数器                          |  1   |   0-0xFFFF   |
|   DX   |                             I/0                              |  2   |   0-0xFFFF   |
|   BX   |                         DS段数据指针                         |  3   |   0-0xFFFF   |
|   SP   |        堆栈指针（Extended Stack Pointer）用于寻找堆栈        |  4   |   0-0xFFFF   |
|   BP   | SS段的数据指针（Extended Frame Pointer）高级语言通过EBP引用堆栈中得函数参数和局部变量 |  5   |   0-0xFFFF   |
|   SI   | 字符串操作的源指针；SS段的数据指针（Extended Source Index）  |  6   |   0-0xFFFF   |
|   DI   | 字符串操作的目标指针；ES段的数据指针（Extended Destination Index） |  7   |   0-0xFFFF   |

### 三、8位寄存器

| 寄存器 | 主要用途（并不是一定只能做下面这些事情） | 编号 | 存储数据范围 |
| :----: | :--------------------------------------: | :--: | :----------: |
|   AH   |     A Hight 占十六位寄存器AX的高八位     |  0   |   0-0xFFFF   |
|   AL   |              A Low 占低八位              |  1   |   0-0xFFFF   |
|   CH   |               C Hight 同理               |  2   |   0-0xFFFF   |
|   CL   |                C Low 同理                |  3   |   0-0xFFFF   |
|   DH   |                 D Hight                  |  4   |   0-0xFFFF   |
|   DL   |                  D Low                   |  5   |   0-0xFFFF   |
|   BH   |                 B Hight                  |  6   |   0-0xFFFF   |
|   BL   |                  B Low                   |  7   |   0-0xFFFF   |



### 三、汇编指令：MOV

```
MOV 指令就是将源操作数的内容，拷贝到目标操作数中 

汇编指令 目标操作数，源操作数
MOV 寄存器，立即数
MOV 寄存器，寄存器

寻址公式

1.立即数
	写入：mov dword ptr ds:[地址],立即数  =>   mov dword ptr ds:[0x1FFF6687],0x88888888
	读取：mov eax, dword ptr ds:[0x0019F77C]  =>  例如0x0019F77C的值是0x66666666 那么eax将被改为0x666666 
	
2.reg 代表寄存器 可以是8个32位通用寄存器中得任意一个
	写入：mov eax,0x12345678 | mov dword ptr ds:[eax],0x88888888   
		这意思是把0x88888888的值写入到eax也就是写入到了0x12345678的地址里 
	读取：mov eax,0x19FF90 |mov ecx,dword ptr ds:[eax]   
		这意思把0x19FF90的值先放到eax里面 ，然后再把eax的值放到ecx里面，等同放0x19FF90
		
3.reg + 立即数
	写入：mov eax, 0x8FF9B8 | mov ebx, dword ptr ds:[eax+0x4] 
		这意思先把eax地址指向0x8FF9B8 然后把ebx 赋值位 eax+4 也就是 0x8FF9B8+4 = 0X8FF9BC 的值
	读取：mov eax,0x12ABCDEF mov,ebx,0x1 , mov dword ptr ds:[eax + ebx*4],0x12345678 
		这意思就是先把12ABCDE8立即数0x12ABCDE8，然后把ebx立即数改为0x1, 然后把 eax + ebx*4 的值改为0x12345678 
		也就是 0x12ABCDE8+ 0x1*4 = 0X12ABCDE8 + 4 = 0x12ABCDEC


```

## 四、存储端序

```12
1、小端存储：数据低位在内存低位，数据高位在内存高位
2、大端存储：数据低位在内存高位，数据高位在内存低位
	windows系统属于小端存储

mov dword ptr ds:[0x12345678],0x11223344

立即数：0x11223344

一个内存地址占四字节 所以上方地址字节占用 和对应的立即数高低位关系如下
0x12345678  => 44
0x12345679  => 33
0x1234567A  => 22
0x1234567B  => 11
```









