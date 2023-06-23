#include <stdio.h>
#include <Windows.h>
// 全局常量

const int g_HP = 10;

int main() {

	// 局部常量
	const int HP = 1;

	// 局部常量存储在栈区  栈区内存默认是可读写的
	// HP = 20  为什么报错：编译器限制了

	// 通过指针修改内存中HP的对应值
	//int* p = &HP;
	//*p = 20;
	//printf("%d \r\n", HP);

	// 尝试通过指针修改全局常量 无访问权限


	DWORD dwOld = 0;
	VirtualProtect(&g_HP, sizeof(g_HP), PAGE_READWRITE, &dwOld);
	int* p = &g_HP;
	*p = 0x64;
	printf("%d \r\n", dwOld); // 旧的写入模式 2  只读 
	printf("%d \r\n", g_HP); // 改变后的值 100

	return 0;
}