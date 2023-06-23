#include <stdio.h>

int main() {

	/*

		�����ƣ�	0000 0001 0010 0011 0100 0101 0110 0111 1000 1001 1010 1011 1100 1101 1110 1111   �����һ
		ʮ���ƣ�	0	 1	  2	   3	4	 5	  6	   7	8	 9									  ��ʮ��һ
		ʮ�����ƣ�	0	 1	  2	   3	4	 5	  6	   7	8	 9    10   11	12	 13   14   15	  ��ʮ����һ

		�ڴ棺
			1Byte = 8bit
			0000 0000   ~   1111 1111
			0x00	    ~   0xFF

			2Byte = 16bit
			0000 0000 0000 0000  ~  1111 1111 1111 1111
			0x0000			     ~  0xFFFF  ÿ��F = 1111

			4Byte = 32bit
			0000 0000 0000 0000 0000 0000 0000 0000 ~  1111 1111 1111 1111 1111 1111 1111 1111
			0x00000000 ~ 0xFFFFFFFF
	*/

	unsigned short num1 = 65535;
	num1 += 1; // 2byte �Ѿ�ռ�� 1111 1111 1111 1111 + 1 = 1 0000 0000 0000 0000 ���� 2Byte ��� ���� = 0 
	printf("%u \n", num1);

	signed short num2 = 32767;
	num2 += 32768;
	printf("%d \n", num2); // Ϊʲô = -32768  ���԰� ȡֵ��Χ����һ������   ����Ǹ��� �ұ�������  �ұ����������ֵ���ӵ� ������ߵø��������ֵ �ұ��������ֵ + 1 �͵���߸������ֵȥ��








	//typeFun();

	//typePrintf();

	//symbolNumber();

	return 0;
}

// ��������
int typeFun() {

	// ������Ҫѡ���������� ռ���ڴ��С��һ�� ȡֵ��ΧҲ��һ��

	// ������ 
	short num1 = 32767;  // 2Byte		-2~15 ~ 2~15 - 1     
	// �� 2 �Ĳ����ʾ���У����λΪ 0 ��ʾ���������λΪ 1 ��ʾ������

	// ����
	int num2 = 100; // 4Byte		-2~31 ~ 2~31 - 1

	// ������ long 
	long num3 = 1000; // 4 Byte		-2~31 ~ 2~31 -1

	// �������� 
	long long num4 = 10000; // 8Byte	-2~63 ~ 2-63~ -1 


	// ��ӡsize ռ���ڴ��С ��λ Byte
	printf("short size = %d \n", sizeof(short));

	printf("short size = %d \n", sizeof(num2));

	printf("short size = %d \n", sizeof(num3));

	printf("short size = %d \n", sizeof(num4));

	return 0;
}

// �������� ��ʽ�������ʽ
int typePrintf() {
	short num1 = 10;

	printf("%hd \n", num1);

	int num2 = 100;
	printf("%d \n", num2);

	long num3 = 1000;
	printf("%ld \n", num3);

	long long num4 = 10000;
	printf("%lld \n", num4);
}

// �з������޷�����
int symbolNumber() {
	// c�����ж����������ͱ���ʱ �Դ�ǰ׺�� signed  ��˼�� �����ֵ�������������߸��� 
	int num1 = 100;
	num1 = -100;

	unsigned int num2 = 256;
	//num2 = -1;
	// ����޷��� %u
	printf("%u \n", num2);

	signed int num3 = -299;
	unsigned int num4 = 199; // ȡֵ 2~32 -1 

	printf("%d \n", num3);
	printf("%d \n", num4);


}

