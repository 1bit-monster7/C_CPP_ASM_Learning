#include "calc.h"

// ��������
int add(int a, int b) {
	return  a + b;
}

int sumTotal(void) {
	// ����Ҫ���� �β��б���Ϊ void
	return 66;
}

int OpenProcessProtect(int pid) {

}

int Inject(int pid) {

}

int Hook_HP(int address) {

}

void test() {
	printf("ͨ��������������޷���main����֮�󴴽���������");
}

void swap(int num1, int num2) {

	printf("����ǰ %d %d\n", num1, num2);

	int temp = num1;

	num1 = num2;

	num2 = temp;

	printf("�ڲ����������� %d %d\n", num1, num2);

	return num1, num2;
}

void funDemo() {
	// printf ���������־
	printf("Hello World \n");

	//strcmp �ж��ַ����Ƿ����
	int isCmp = strcmp("66", "77");
	printf("%d \n", isCmp);

	//strcat
	char str1[30] = "ţ��";
	char str2[30] = "������";
	strcat(str1, str2);
	printf("%s \n", str1); // �ı�str1
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