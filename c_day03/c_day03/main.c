#include <stdio.h>

#define HP 100

//转义字符
int main() {

	printf("Hello World \n");

	printf("\\  \n");

	printf("\"我打了双引号\" \n");

	printf("\'我打了单引号\' \n");

	formatOutput();
}


// 格式化输出
int formatOutput() {

	int num = 10;

	const MP = 100;

	printf("%d \n", HP);

	printf("%d \n", MP);

	printf("%d \n", num);

	printf("%d \n", 1 + 2);
	// printf("格式化字符串",待打印项)
	// %d == 输出有符号的十进制数


	// 格式化字符串是双引号括起来的内容
	// 待打印项 ： 可以是表达式 、可以是变量 、常量 、值
	// 格式化字符串中得转换一定要与待打印项匹配  例如 %d 转换 == 有符号的10进制数 printf("%d \n", true); // 例如这样是不被允许的

	int code = 9527;

	char name[] = "是个间谍";

	// 9527 是个间谍 %s 输出字符串
	printf("%d%s \n", code, name);

	return 0;
}