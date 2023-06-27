#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

#include "calc.h" // 包含自定义头文件








int main() {
	int sum = add(1, 2);

	printf("%d \n", sum);

	logStr("牛逼", "class");

	int total = sumTotal();

	printf("%d \n", total);

	// 浮点数和双浮点数 占内存大小不同  [f：4Byte | double：8Byte]

	float fTotal = floatSum(3.14f, 6.16f);
	printf("%.2f \n", fTotal);

	double dTotal = doubleSum(3.14, 6.17);
	printf("%.3lf \n", dTotal);

	bool isCmp = cmpStr("niub", "niub");
	printf("%s \n", isCmp ? "不相等" : "相等");

	int a = 1;
	int b = 2;
	swap(a, b);
	printf("交换后 %d %d\n", a, b); // 交换的只是函数内部的形参并不是地址值 所以不会影响原数据
}

