#include <stdio.h>

int main() {

	// 一个十六进制数 == 4个二进制数  即   0x0 = 0000 | 0xF  = 1111

	// char			1Byte * 8 = 8Bit  0000 0000										HEX：0x00 ~ 0xFF
	
	// short		2Byte * 8 = 16Bit 0000 0000 0000 0000							HEX：0x0000 ~ 0xFFFF
	
	// int			4Byte * 8 = 32Bit 0000 0000 0000 0000 0000 0000 0000 0000		HEX：0x 00000000 ~ 0x FFFFFFFF
	
	// long			4Byte * 8 = 32Bit 0000 0000 0000 0000 0000 0000 0000 0000       HEX：0x 00000000 ~ 0x FFFFFFFF
	
	// long long    ....


	// 0 0 0 0 0 0 0 0 
	
	// 1 1 1 1 1 1 1 1 
	
	/*signed char str = 0x7F;

	printf("%d \n", str);

	str += 1;

	printf("%d \n", str);

	signed int num = 0x7FFFFFFF;

	printf("%d \n", num);

	num += 1;

	printf("%d \n", num);*/
	


	/*
		在下面的代码中，变量 num2 被声明为无符号整数类型 unsigned int，并赋值为十六进制表示的 0xFFFFFFFF。然后通过 printf 函数将 num2 的值以十进制形式打印出来。

		然而，这个代码会输出一个负数的原因是 % d 是用于打印带符号的十进制整数。当 % d 用于打印一个无符号整数时，可能会发生符号扩展，导致输出的结果不正确。

		要正确地打印一个无符号整数，应该使用 % u 格式说明符。所以，可以将代码中的 printf 修改为以下方式：
	*/


	unsigned int num2 = 0xFFFFFFFF;
	 
	printf("%u \n", num2);

	signed int num3 = 0x7FFFFFFF;

	num3 += 1;

	printf("%d \n", num3);






	return 0;
}