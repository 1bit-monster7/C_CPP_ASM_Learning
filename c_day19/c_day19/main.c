#include <stdio.h>

int main() {





	// ǿ�з���һ��δʹ�õ�0x12345678 ��ַ �ᱨ��
	__asm {
		MOV DWORD PTR DS:[0x12345678],0x66666666

		MOV EAX,DWORD PTR DS:[0x12345678]  // ��0x12345678��ַ�� ��������ֵ��EAX��
	}
	return 0;
}