#include <stdio.h>

int main() {





	// 强行访问一个未使用的0x12345678 地址 会报错
	__asm {
		MOV DWORD PTR DS:[0x12345678],0x66666666

		MOV EAX,DWORD PTR DS:[0x12345678]  // 把0x12345678地址的 立即数赋值到EAX中
	}
	return 0;
}