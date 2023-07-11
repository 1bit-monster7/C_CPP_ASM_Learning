#include <stdio.h>

int main() {

	// 汇编
	//__asm {
	//	MOV EAX, 0x66666666
	//	MOV EBX, 0xFA12
	//	MOV ECX, 0x11223344
	//	MOV EDX, 0x12345678ABCDEF // 仅会保留32位数据 也就是 8个十六进制位 78ABCDEF
	//	
	//	MOV EBX,EAX
	//}




	// 16位寄存器 占用的是低16位  如下 eax低4位被改变为9999
	// 8位寄存器  占用的是16位寄存器的高低位 例如0x999 会被ah改变为0x8899 然后al改变为 0x8877
	__asm {
		mov eax, 0x66666666
		mov ax, 0x9999
		mov ah, 0x88
		mov al, 0x77
	}


	return 0;
}