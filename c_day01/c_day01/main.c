// ����һ��ͷ�ļ�
#include <stdio.h>;
/*
	stdio.h == ��׼�������ͷ�ļ�
	std		== standard ��׼
	i		== in		����
	o		== out		���
	h		== header   ͷ
*/


// �곣�� ֵ
#define HP 100


/* ��ں��� ������ ����ֻ����һ�� */
int main() {
	/* ����stdioͷ�ļ��е� printf���� �����̨��ӡ��Ϣ */

	printf("Hello World Monster7 \n");

	printf("/* Ferry */ \n " /* " Freey" */); // ���������ھ�ȻҲ��ע��

	// ����
	int num = 666;

	// ��ӡ &d ת���ַ� ��num��ֵ �滻��%d ���ɹ���ӡ
	printf("%d\n", num);

	num = 999;

	// ���峣����������
	const int MP = 1000;

	printf("%d %d", HP, MP);

	return 0;
}