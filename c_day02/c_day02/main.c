#include <stdio.h>
#include <Windows.h>
// ȫ�ֳ���

const int g_HP = 10;

int main() {

	// �ֲ�����
	const int HP = 1;

	// �ֲ������洢��ջ��  ջ���ڴ�Ĭ���ǿɶ�д��
	// HP = 20  Ϊʲô����������������

	// ͨ��ָ���޸��ڴ���HP�Ķ�Ӧֵ
	//int* p = &HP;
	//*p = 20;
	//printf("%d \r\n", HP);

	// ����ͨ��ָ���޸�ȫ�ֳ��� �޷���Ȩ��


	DWORD dwOld = 0;
	VirtualProtect(&g_HP, sizeof(g_HP), PAGE_READWRITE, &dwOld);
	int* p = &g_HP;
	*p = 0x64;
	printf("%d \r\n", dwOld); // �ɵ�д��ģʽ 2  ֻ�� 
	printf("%d \r\n", g_HP); // �ı���ֵ 100

	return 0;
}