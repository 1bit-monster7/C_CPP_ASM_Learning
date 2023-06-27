#include "calc.h"

// 函数定义
int add(int a, int b) {
	return  a + b;
}

int sumTotal(void) {
	// 不需要传参 形参列表定义为 void
	return 66;
}

int OpenProcessProtect(int pid) {

}

int Inject(int pid) {

}

int Hook_HP(int address) {

}

void test() {
	printf("通过函数声明解决无法在main函数之后创建函数问题");
}

void swap(int num1, int num2) {

	printf("交换前 %d %d\n", num1, num2);

	int temp = num1;

	num1 = num2;

	num2 = temp;

	printf("内部变量交换后 %d %d\n", num1, num2);

	return num1, num2;
}

void funDemo() {
	// printf 函数输出日志
	printf("Hello World \n");

	//strcmp 判断字符串是否相等
	int isCmp = strcmp("66", "77");
	printf("%d \n", isCmp);

	//strcat
	char str1[30] = "牛逼";
	char str2[30] = "六六六";
	strcat(str1, str2);
	printf("%s \n", str1); // 改变str1
}

void logStr(char str1[], char str2[]) {
	printf("%s \n", str1);
	printf("%s \n", str2);
}

float floatSum(float a, float b) {
	return a + b;
}

double doubleSum(double a, double b) {
	return a + b;
}

bool cmpStr(const char* str1, const char* str2) {
	return strcmp(str1, str2) != 0;
}