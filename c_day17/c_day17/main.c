#include <stdio.h>

int main() {

	char str1 = 0xFC;
	char str2 = 0x37;
	char str3 = 0;


	//λ���㣺 & ��AND�� ���ң�������Ȳŵ���1
	//1111 1100
	//0011 0111
	str3 = str1 & str2;
	//BIN��0011 0100
	//HEX: 0x34
	// 16 ^ 0 = 1 * 4 = 4;
	// 16 ^ 1 = 16 * 3 = 48;
	// DEC��52	


	//λ���㣺 | ��OR�� ���ߣ�ֻҪ��һ��1��Ϊ1
	//1111 1100
	//0011 0111
	str3 = str1 | str2;
	//BIN��1111 1111
	//HEX��0xFF
	// 16 ^ 0 = 1 * 15 = 16 ;
	// 16 ^ 1 = 16 * 15 = 240;
	// DEC��255

	
	//λ���㣺 ~ (NOT) ȡ����ÿ��������λ 0��1  1��0
	//0011 0111
	str3 = ~str2;
	//BIN��1100 1000
	//HEX��0xC8
	//16 ^ 0 = 1 * 8 = 8;
	//16 ^ 1 = 16 * 12 = 192;
	//DEC��200



	//λ���㣺 ^ (XOR) ��򣬲�һ����Ϊ1 ����Ϊ0
	str3 = str1 ^ str2; 
	//1111 1100
	//0011 0111
	//BIN��1100 1011
	//HEX��0xCB
	//16 ^ 0 = 1 * 11 = 11;
	//16 ^ 1 = 16 * 12 = 192'
	//DEC��203


	//��ҵ�������ݿ���Ϊ1Byte ֵΪ 0xC7 �ڲ��ƻ�ԭʼ���ݵ������ ����ָ����ȡĳ��λ��ֵ  ������ʹ�� << >> ������ �κ���ҵ

	//��ҵ����������Կ�������� ������Կ���н���

	char key = 0xAB;

	char password = 0x89;

	char jmPassWord = key ^ password;

	//0xAB; 0x89;
	//1010 1011; 
	//1000 1001;
	//0010 0010; -> 0x22;
	//jmPassWord // ֵΪ 0x22 


	//�����Ҫ������
	
	char jieMPassWord = key ^ jmPassWord; // ���0x89 �պ� == passWord��ֵ



	


	return 0;
}