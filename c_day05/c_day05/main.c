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

	printf("������ƥ�����");

	scanf_s("%d", &code);


	switch (code) {
	case 1:
		printf("ֵΪ1");
		break;
	case 2:
		printf("ֵΪ2");
		break;
	default:
		printf("ûƥ����");
	}
}

int orderDemo() {
	int age = 18;
	printf("�������������䣺");
	scanf_s("%d", &age);


	if (age >= 18) {
		printf("if �ѳ��� \n");
	}
	else if (age >= 16) {
		printf("���� ��δ���� \n");
	}
	else {
		printf("����16������ɶ \n");
	}

	age >= 18 ? printf("��Ŀ������") : age >= 16 ? printf("������") : printf("�����Ѳ���");



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

	num3 = ++num2 - 2; // 2 �ȼ��ٸ�ֵ

	printf("num3��%d num2��%d  \n", num3, num2); // 0 2

	num3 = num2++ + 3;

	printf("num3��%d num2��%d  \n", num3, num2); // 5 3

	num3 = --num2 - 1 + 3;

	printf("num3��%d num2��%d  \n", num3, num2); // 4 2

	num3 = num2-- + 2 - 3;

	printf("num3��%d num2��%d  \n", num3, num2); // 1 1

	num3 += num2++;

	printf("num3��%d num2��%d  \n", num3, num2); // 2 2

	num3 -= --num2;

	printf("num3��%d num2��%d  \n", num3, num2); // 1 1

	num3 *= num2 + 3;

	printf("num3��%d num2��%d  \n", num3, num2); // 4 1

	num3 /= 2 * 2;

	printf("num3��%d num2��%d  \n", num3, num2); // 1 1

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

	printf("%d \n", num2); // ����%d ���� ��ضϺ����С�� 33.3333  -> 33

	num2 = 10 * 12;

	printf("%d \n", num2);

	num2 = 10 % 3; // ȡ�� 3 * 3  = 9 �� 1

	printf("%d \n", num2);

}

int typeCasting() {
	double d = 3.1415926;
	float f = 6.14;
	//ǿ������ת�� (type_name)��Ҫת���ı���
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

	// ռ��Byte/�ֽ�  ռ�� Bit/λ
	printf("int %d Byte = %d Bit\n", sizeof(num), sizeof(num) * 8);

	printf("long %d Byte = %d Bit\n", sizeof(long), sizeof(long) * 8);

	printf("long long %d Byte = %d Bit\n", sizeof(long long), sizeof(long long) * 8);

	printf("float %d Byte = %d Bit\n", sizeof(fnum), sizeof(fnum) * 8);

	printf("double %d Byte = %d Bit\n", sizeof(dnum), sizeof(dnum) * 8);

	printf("char %d Byte = %d Bit\n", sizeof(str), sizeof(str) * 8);

	printf("bool %d Byte = %d Bit\n", sizeof(bool), sizeof(bool) * 8);

}

int boolType() {
	// �������� bool
	// �� == true == 1
	// �� == false == 0

	bool b = true;

	printf("%d \n", b);

	b = false;

	printf("%d \n", b);

	printf("%d \n", 1 + 1 == 2); // return true
	printf("%d \n", 1 + 1 == 3);// return false

}

int charType() {
	//�ַ��� == char

	//�ַ���������������ʾ ���� �ַ�

	//char 1Byte 8Bit

	char str = 'A';

	printf("%c \n", str);

	str = 0x41;

	printf("%c \n", str);

	printf("%d \n", str);
}

int floatType() {

	// ʵ�� == ������
	// ���������ڴ洢С��

	/*
		�����ȸ����� float  4Byte  32Bit 7 ��Ч����
		˫���ȸ����� double 8Byte  64Bit 15~16 ��Ч����
	*/

	float f = 3.1415926f; // ������Ҫ��������f ����ᰴ��double����
	printf("%f \n", f);

	double d = 3.1415926;
	printf("%lf \n", d);
	printf("%.15lf \n", d); // ��ʽ�� .xλ ������λС��

	return 0;
}