#include <stdio.h>

int main() {
	//——————————————————————————————————————————————————————————————————

	//一、计算机中存储数据由于受到硬件约束，数据大小是有限制的（数据宽度）
	//二、在计算机中，对数值进行运算前需要先规定其宽度，再进行运算
	//三、如果运算结果超出了数据宽度的限制，多余数据将会被舍弃 


	//char ch = 100 + 200;

	//printf("%d \n", ch); // 44 

	// char 类型 1Byte -128 - 127 范围 不在范围内 所以数据宽度超出了 

	// 100 + 200 = HEX：0x12C

	//12C 转 二进制

	//0001 0010 1100  因为char类型宽度不够 所以舍弃了 0001 也就是 12C 保留了 2C

	//char = 1Byte = 8Bit = 0010 1100  

	//二进制转换十进制

	//0010 1100  对应下标 2 3 5 

	//2 ^ 2 = 4;

	//2 ^ 3 = 8;

	//2 ^ 5 = 32;

	//32 + 8 + 4 = 44  // 最终得出十进制值为 ： 44




	//————————————————————————————————————————————————————————————————

	//最大十进制值 = (2 ^ N) - 1  N 表示int 类型的位数 int = 4Byte  = 4 * 8 = 32Bit   (2^32)-1

	unsigned int maxSize = 0xFFFFFFFF + 145;
	signed int maxSizeSigned = 0x7FFFFFFF;
	
	printf("%u \n", maxSize); // 输出结果为 144  
	printf("%d \n", maxSizeSigned); // 输出结果为 2147483647 

	//4294967295 + 145 =  4,294,967,440  = HEX：0x 1 0000 0090  

	//将十六进制转换为 ：BIN：0001 0000 0000 0000 0000 0000 0000 1001 0000

	// 因为 int 只能存储 32个位 也就是32个二进制0  所以  0000 0000 0000 0000 0000 0000 1001 0000  导致数据宽度不够，最前面的0001就被舍弃了 

	// 最后将二进制转换为10进制 \d 输出 

	//2 ^ 4 = 16;

	//2 ^ 7 = 128;

	//转换得到的十进制数是 128+16 = 144






	//————————————————————————————————————————————————————————————————

	//无符号的 char unsigend 因为舍弃了符号位 所以 最大范围取值是 (2 ^ ( 1Byte * 8 )) -1 = 255

	//有符号的 char sigend 因为符号位占据最高位 1位 所以 最大范围取值是 (2 ^ ( 1Byte * ( 8 - 1 ))) -1 = 127 

	//unsigned char str1 = 255;

	//signed char str2 = 127;

	//printf("%u \n", str1);

	//printf("%d \n", str2);

	return 0;
}