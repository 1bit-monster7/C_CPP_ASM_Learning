#include<stdio.h>

// ��������
void pointer();
void pointerDemo();
void pointerSizeOf();
int main() {
	//pointer();
	//pointerDemo();
	pointerSizeOf();
}

void pointerSizeOf() {

	//��x86 32λ�� ���е�ָ�붼��4�ֽ�ռ��  32bit / 8 = 4Byte 
	//��x64 64λ�� ���е�ָ�붼��8�ֽ�ռ��  64bit / 8 = 8Byte 
	printf("%d \n", sizeof(int*)); // 4�ֽ�  ����ַ ռ4�ֽ�
	printf("%d \n", sizeof(long*));// 8�ֽ�  ����ַ ռ4�ֽ�
	printf("%d \n", sizeof(short*));// 2�ֽ� ����ַ ռ4�ֽ�
	printf("%d \n", sizeof(char*));// 1�ֽ�  ����ַ ռ4�ֽ�

	int num = 10;

	int num1 = (int)3.51414314; // ǿ������ת��
	
	// Ұָ�� ʹ��ָ��һ��Ҫ�Ͻ� ������ָ�� ����������׳���
	//int* p = (int*)(0x12345678);// �����Ҫһ�� ָ�����͵ı��� �Ҳ�ʮ������ֵ ǿתΪ int* 
	//*p = 100;
	//printf("%d \n", *p);

	
	// ��ָ�� ���ʿ�ָ�뱨��
	int* np = NULL;

	if (!np) {
		printf("��ָ��Ϊ��ʱ����Ȼ��Ѱַ...����������������..");
	}

}

void pointerDemo() {
	//short num = 10;
	//short* p_address = &num;
	//*p_address = 20;
	//printf("%d \n", num);

	int* np = (int*)(0x400000);

	int data = *np; // int data =  *np  ���� ȥ��* Ҳ�͵���    data == int np  

	printf("%x \n", data);

}

void pointer() {
	int num = 15;
	// ȡַ��  int * �������Ϳ��Խ��յ�ֵַ
	// ָ�����P  ����  ������������ + *   == ָ������ 
	int* p = &num;
	printf("%p \n", p);
	*p = 1;


}