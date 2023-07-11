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

### 

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

### 

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



### 三、汇编指令：MOV

```
MOV 指令就是将源操作数的内容，拷贝到目标操作数中 

汇编指令 目标操作数，源操作数
MOV 寄存器，立即数
MOV 寄存器，寄存器

```









