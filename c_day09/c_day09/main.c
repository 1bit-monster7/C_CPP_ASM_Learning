#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

#include "calc.h" // �����Զ���ͷ�ļ�








int main() {
	int sum = add(1, 2);

	printf("%d \n", sum);

	logStr("ţ��", "class");

	int total = sumTotal();

	printf("%d \n", total);

	// ��������˫������ ռ�ڴ��С��ͬ  [f��4Byte | double��8Byte]

	float fTotal = floatSum(3.14f, 6.16f);
	printf("%.2f \n", fTotal);

	double dTotal = doubleSum(3.14, 6.17);
	printf("%.3lf \n", dTotal);

	bool isCmp = cmpStr("niub", "niub");
	printf("%s \n", isCmp ? "�����" : "���");

	int a = 1;
	int b = 2;
	swap(a, b);
	printf("������ %d %d\n", a, b); // ������ֻ�Ǻ����ڲ����ββ����ǵ�ֵַ ���Բ���Ӱ��ԭ����
}

