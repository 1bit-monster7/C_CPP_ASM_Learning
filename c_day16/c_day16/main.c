#include <stdio.h>

int main() {

	// һ��ʮ�������� == 4����������  ��   0x0 = 0000 | 0xF  = 1111

	// char			1Byte * 8 = 8Bit  0000 0000										HEX��0x00 ~ 0xFF
	
	// short		2Byte * 8 = 16Bit 0000 0000 0000 0000							HEX��0x0000 ~ 0xFFFF
	
	// int			4Byte * 8 = 32Bit 0000 0000 0000 0000 0000 0000 0000 0000		HEX��0x 00000000 ~ 0x FFFFFFFF
	
	// long			4Byte * 8 = 32Bit 0000 0000 0000 0000 0000 0000 0000 0000       HEX��0x 00000000 ~ 0x FFFFFFFF
	
	// long long    ....


	// 0 0 0 0 0 0 0 0 
	
	// 1 1 1 1 1 1 1 1 
	
	/*signed char str = 0x7F;

	printf("%d \n", str);

	str += 1;

	printf("%d \n", str);

	signed int num = 0x7FFFFFFF;

	printf("%d \n", num);

	num += 1;

	printf("%d \n", num);*/
	


	/*
		������Ĵ����У����� num2 ������Ϊ�޷����������� unsigned int������ֵΪʮ�����Ʊ�ʾ�� 0xFFFFFFFF��Ȼ��ͨ�� printf ������ num2 ��ֵ��ʮ������ʽ��ӡ������

		Ȼ���������������һ��������ԭ���� % d �����ڴ�ӡ�����ŵ�ʮ������������ % d ���ڴ�ӡһ���޷�������ʱ�����ܻᷢ��������չ����������Ľ������ȷ��

		Ҫ��ȷ�ش�ӡһ���޷���������Ӧ��ʹ�� % u ��ʽ˵���������ԣ����Խ������е� printf �޸�Ϊ���·�ʽ��
	*/


	unsigned int num2 = 0xFFFFFFFF;
	 
	printf("%u \n", num2);

	signed int num3 = 0x7FFFFFFF;

	num3 += 1;

	printf("%d \n", num3);






	return 0;
}