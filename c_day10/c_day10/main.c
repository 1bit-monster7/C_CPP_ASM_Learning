#include<stdio.h>

// 函数声明
void pointer();
void pointerDemo();
void pointerSizeOf();
int main() {
	//pointer();
	//pointerDemo();
	pointerSizeOf();
}

void pointerSizeOf() {

	//在x86 32位下 所有的指针都是4字节占用  32bit / 8 = 4Byte 
	//在x64 64位下 所有的指针都是8字节占用  64bit / 8 = 8Byte 
	printf("%d \n", sizeof(int*)); // 4字节  但地址 占4字节
	printf("%d \n", sizeof(long*));// 8字节  但地址 占4字节
	printf("%d \n", sizeof(short*));// 2字节 但地址 占4字节
	printf("%d \n", sizeof(char*));// 1字节  但地址 占4字节

	int num = 10;

	int num1 = (int)3.51414314; // 强制类型转换
	
	// 野指针 使用指针一定要严谨 不能乱指向 否则程序容易出错
	//int* p = (int*)(0x12345678);// 左侧需要一个 指针类型的变量 右侧十六进制值 强转为 int* 
	//*p = 100;
	//printf("%d \n", *p);

	
	// 空指针 访问空指针报错
	int* np = NULL;

	if (!np) {
		printf("当指针为空时进入然后寻址...巴拉巴拉其他操作..");
	}

}

void pointerDemo() {
	//short num = 10;
	//short* p_address = &num;
	//*p_address = 20;
	//printf("%d \n", num);

	int* np = (int*)(0x400000);

	int data = *np; // int data =  *np  等于 去掉* 也就等于    data == int np  

	printf("%x \n", data);

}

void pointer() {
	int num = 15;
	// 取址符  int * 这种类型可以接收地址值
	// 指针变量P  加了  基本数据类型 + *   == 指针类型 
	int* p = &num;
	printf("%p \n", p);
	*p = 1;


}