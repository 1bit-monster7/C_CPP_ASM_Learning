#include <stdio.h>

int main() {

	// ���
	//__asm {
	//	MOV EAX, 0x66666666
	//	MOV EBX, 0xFA12
	//	MOV ECX, 0x11223344
	//	MOV EDX, 0x12345678ABCDEF // ���ᱣ��32λ���� Ҳ���� 8��ʮ������λ 78ABCDEF
	//	
	//	MOV EBX,EAX
	//}




	// 16λ�Ĵ��� ռ�õ��ǵ�16λ  ���� eax��4λ���ı�Ϊ9999
	// 8λ�Ĵ���  ռ�õ���16λ�Ĵ����ĸߵ�λ ����0x999 �ᱻah�ı�Ϊ0x8899 Ȼ��al�ı�Ϊ 0x8877
	__asm {
		mov eax, 0x66666666
		mov ax, 0x9999
		mov ah, 0x88
		mov al, 0x77
	}


	return 0;
}