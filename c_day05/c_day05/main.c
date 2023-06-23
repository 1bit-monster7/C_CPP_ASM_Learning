#include <stdio.h>
#include <stdbool.h>
int main() {

	//floatType();
	//charType();
	//boolType();
	//sizeofDemo();
	//typeCasting();
	//operatorDemo();
	//incrementDemo();
	//orderDemo();
	switchDemo();

}

int switchDemo() {
	int code = 0;

	printf("请输入匹配编码");

	scanf_s("%d", &code);


	switch (code) {
	case 1:
		printf("值为1");
		break;
	case 2:
		printf("值为2");
		break;
	default:
		printf("没匹配上");
	}
}

int orderDemo() {
	int age = 18;
	printf("请输入您的年龄：");
	scanf_s("%d", &age);


	if (age >= 18) {
		printf("if 已成年 \n");
	}
	else if (age >= 16) {
		printf("青年 但未成年 \n");
	}
	else {
		printf("低于16你来干啥 \n");
	}

	age >= 18 ? printf("三目成年了") : age >= 16 ? printf("青年了") : printf("狗几把不是");



}

int incrementDemo() {
	//int num = 0;

	//printf("%d \d", num);

	//++num;

	//printf("%d \d", num);

	//num++;

	//printf("%d \d", num);

	int num2 = 1;

	int num3 = 0;

	num3 = ++num2 - 2; // 2 先加再赋值

	printf("num3：%d num2：%d  \n", num3, num2); // 0 2

	num3 = num2++ + 3;

	printf("num3：%d num2：%d  \n", num3, num2); // 5 3

	num3 = --num2 - 1 + 3;

	printf("num3：%d num2：%d  \n", num3, num2); // 4 2

	num3 = num2-- + 2 - 3;

	printf("num3：%d num2：%d  \n", num3, num2); // 1 1

	num3 += num2++;

	printf("num3：%d num2：%d  \n", num3, num2); // 2 2

	num3 -= --num2;

	printf("num3：%d num2：%d  \n", num3, num2); // 1 1

	num3 *= num2 + 3;

	printf("num3：%d num2：%d  \n", num3, num2); // 4 1

	num3 /= 2 * 2;

	printf("num3：%d num2：%d  \n", num3, num2); // 1 1

	int count = 10;

	count %= 3;

	printf("%d \n", count);

}

int operatorDemo() {
	int num = +3;

	printf("%d \n", num);

	num = -3;

	printf("%d \n", num);

	num = 10 + 2;

	printf("%d \n", num);

	num = (10 - 2) - (1 * 10);

	printf("%d \n", num);

	num = -10 * 33;

	printf("%d \n", num);

	unsigned num2 = 100 / 3;

	printf("%d \n", num2); // 整数%d 接收 会截断后面的小数 33.3333  -> 33

	num2 = 10 * 12;

	printf("%d \n", num2);

	num2 = 10 % 3; // 取余 3 * 3  = 9 余 1

	printf("%d \n", num2);

}

int typeCasting() {
	double d = 3.1415926;
	float f = 6.14;
	//强制类型转换 (type_name)需要转换的变量
	// (float)(x+y/2)
	// (int)(a+b*c/d)

	printf("%d \n", (int)d);
	printf("%d \n", (int)f);

}

int sizeofDemo() {
	int num = 1;
	long lnum = 1000;
	long long llnum = 100000;
	float fnum = 1.13;
	double dnum = 1.134;
	char str = 'A';
	bool b = true;

	// 占用Byte/字节  占用 Bit/位
	printf("int %d Byte = %d Bit\n", sizeof(num), sizeof(num) * 8);

	printf("long %d Byte = %d Bit\n", sizeof(long), sizeof(long) * 8);

	printf("long long %d Byte = %d Bit\n", sizeof(long long), sizeof(long long) * 8);

	printf("float %d Byte = %d Bit\n", sizeof(fnum), sizeof(fnum) * 8);

	printf("double %d Byte = %d Bit\n", sizeof(dnum), sizeof(dnum) * 8);

	printf("char %d Byte = %d Bit\n", sizeof(str), sizeof(str) * 8);

	printf("bool %d Byte = %d Bit\n", sizeof(bool), sizeof(bool) * 8);

}

int boolType() {
	// 布尔类型 bool
	// 真 == true == 1
	// 假 == false == 0

	bool b = true;

	printf("%d \n", b);

	b = false;

	printf("%d \n", b);

	printf("%d \n", 1 + 1 == 2); // return true
	printf("%d \n", 1 + 1 == 3);// return false

}

int charType() {
	//字符型 == char

	//字符变量可以用于显示 单个 字符

	//char 1Byte 8Bit

	char str = 'A';

	printf("%c \n", str);

	str = 0x41;

	printf("%c \n", str);

	printf("%d \n", str);
}

int floatType() {

	// 实形 == 浮点型
	// 浮点型用于存储小数

	/*
		单精度浮点数 float  4Byte  32Bit 7 有效数字
		双精度浮点数 double 8Byte  64Bit 15~16 有效数字
	*/

	float f = 3.1415926f; // 浮点数要后续增加f 否则会按照double处理
	printf("%f \n", f);

	double d = 3.1415926;
	printf("%lf \n", d);
	printf("%.15lf \n", d); // 格式化 .x位 保留多位小数

	return 0;
}