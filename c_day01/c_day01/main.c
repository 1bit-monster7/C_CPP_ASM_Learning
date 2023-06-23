// 包含一个头文件
#include <stdio.h>;
/*
	stdio.h == 标准输入输出头文件
	std		== standard 标准
	i		== in		输入
	o		== out		输出
	h		== header   头
*/


// 宏常量 值
#define HP 100


/* 入口函数 主函数 有且只能有一个 */
int main() {
	/* 调用stdio头文件中得 printf方法 像控制台打印消息 */

	printf("Hello World Monster7 \n");

	printf("/* Ferry */ \n " /* " Freey" */); // 函数参数内居然也能注释

	// 定义
	int num = 666;

	// 打印 &d 转义字符 将num的值 替换到%d 来成功打印
	printf("%d\n", num);

	num = 999;

	// 定义常量数据类型
	const int MP = 1000;

	printf("%d %d", HP, MP);

	return 0;
}