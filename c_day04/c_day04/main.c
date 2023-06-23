#include <stdio.h>

int main() {

	/*

		二进制：	0000 0001 0010 0011 0100 0101 0110 0111 1000 1001 1010 1011 1100 1101 1110 1111   逢二进一
		十进制：	0	 1	  2	   3	4	 5	  6	   7	8	 9									  缝十进一
		十六进制：	0	 1	  2	   3	4	 5	  6	   7	8	 9    10   11	12	 13   14   15	  缝十六进一

		内存：
			1Byte = 8bit
			0000 0000   ~   1111 1111
			0x00	    ~   0xFF

			2Byte = 16bit
			0000 0000 0000 0000  ~  1111 1111 1111 1111
			0x0000			     ~  0xFFFF  每个F = 1111

			4Byte = 32bit
			0000 0000 0000 0000 0000 0000 0000 0000 ~  1111 1111 1111 1111 1111 1111 1111 1111
			0x00000000 ~ 0xFFFFFFFF
	*/

	unsigned short num1 = 65535;
	num1 += 1; // 2byte 已经占满 1111 1111 1111 1111 + 1 = 1 0000 0000 0000 0000 导致 2Byte 溢出 所以 = 0 
	printf("%u \n", num1);

	signed short num2 = 32767;
	num2 += 32768;
	printf("%d \n", num2); // 为什么 = -32768  可以把 取值范围比作一个球形   左边是负数 右边是正数  右边正数的最大值交接点 就是左边得负数的最大值 右边正数最大值 + 1 就到左边负数最大值去了








	//typeFun();

	//typePrintf();

	//symbolNumber();

	return 0;
}

// 数据类型
int typeFun() {

	// 根据需要选择整数类型 占用内存大小不一样 取值范围也不一样

	// 短整形 
	short num1 = 32767;  // 2Byte		-2~15 ~ 2~15 - 1     
	// 在 2 的补码表示法中，最高位为 0 表示正数，最高位为 1 表示负数。

	// 整形
	int num2 = 100; // 4Byte		-2~31 ~ 2~31 - 1

	// 长整数 long 
	long num3 = 1000; // 4 Byte		-2~31 ~ 2~31 -1

	// 长长整形 
	long long num4 = 10000; // 8Byte	-2~63 ~ 2-63~ -1 


	// 打印size 占用内存大小 单位 Byte
	printf("short size = %d \n", sizeof(short));

	printf("short size = %d \n", sizeof(num2));

	printf("short size = %d \n", sizeof(num3));

	printf("short size = %d \n", sizeof(num4));

	return 0;
}

// 数据类型 格式化输出方式
int typePrintf() {
	short num1 = 10;

	printf("%hd \n", num1);

	int num2 = 100;
	printf("%d \n", num2);

	long num3 = 1000;
	printf("%ld \n", num3);

	long long num4 = 10000;
	printf("%lld \n", num4);
}

// 有符号与无符号数
int symbolNumber() {
	// c语言中定义整数类型变量时 自带前缀是 signed  意思是 这个数值可以是正数或者负数 
	int num1 = 100;
	num1 = -100;

	unsigned int num2 = 256;
	//num2 = -1;
	// 输出无符号 %u
	printf("%u \n", num2);

	signed int num3 = -299;
	unsigned int num4 = 199; // 取值 2~32 -1 

	printf("%d \n", num3);
	printf("%d \n", num4);


}

