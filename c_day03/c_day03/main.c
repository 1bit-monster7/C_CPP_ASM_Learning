#include <stdio.h>

#define HP 100

//ת���ַ�
int main() {

	printf("Hello World \n");

	printf("\\  \n");

	printf("\"�Ҵ���˫����\" \n");

	printf("\'�Ҵ��˵�����\' \n");

	formatOutput();
}


// ��ʽ�����
int formatOutput() {

	int num = 10;

	const MP = 100;

	printf("%d \n", HP);

	printf("%d \n", MP);

	printf("%d \n", num);

	printf("%d \n", 1 + 2);
	// printf("��ʽ���ַ���",����ӡ��)
	// %d == ����з��ŵ�ʮ������


	// ��ʽ���ַ�����˫����������������
	// ����ӡ�� �� �����Ǳ��ʽ �������Ǳ��� ������ ��ֵ
	// ��ʽ���ַ����е�ת��һ��Ҫ�����ӡ��ƥ��  ���� %d ת�� == �з��ŵ�10������ printf("%d \n", true); // ���������ǲ��������

	int code = 9527;

	char name[] = "�Ǹ����";

	// 9527 �Ǹ���� %s ����ַ���
	printf("%d%s \n", code, name);

	return 0;
}