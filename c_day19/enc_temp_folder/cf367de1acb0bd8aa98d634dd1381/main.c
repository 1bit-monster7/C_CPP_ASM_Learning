#include <stdio.h>

int main() {
	__asm {
		MOV DWORD PTR DS:[0x12345678],0x66666666

		MOV EAX,DWORD PTR DS:[0x12345678]  // ��0x12345678��ַ�� ��������ֵ��EAX��
	}
	return 0;
}