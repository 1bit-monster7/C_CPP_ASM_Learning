#define _CRT_SECURE_NO_WARNINGS  // 忽略警告 要写到头文件前面
#include <Windows.h>
#include <stdio.h>
#include <string.h>
#include<stdbool.h>

void TestFun() {
	int i = 0;
	int arr[5] = { 0 };
}

int arrayAndArrayChar() {

	// 字符数组
	char szBuf[] = { 1,2,3,4,5 };

	// 字符数组
	char szBuf1[] = { 'h','e','l','l','o','w' };

	// 实现字符串  字符 + 数组 + \0 确定字符结束标识位  
	char szBuf2[] = { 'h','e','l','l','o','w','\0' };

	// 第二种定义方式 实现字符串 编译器会自动在 字符尾部 添加\0 标识
	char szBuf3[] = "六六六六";

	// 字符串 碰到 \0 就结束了 后续不会输出
	char szBuf4[] = { 'n','b','\0','1','b','i','t' };
	printf("%s \n", szBuf4);
}

int charAndStrDemo() {

	// & 取址操作符  scanf_s 默认需要传入地址值 所以普通类型的值一般都要&num  但数组值本身就返回首地址值 所以不需要特意 & 
	//char szBuf[40];

	// 规定scanf_s 传入的长度 确保字符串在限制的 内存大小区间内 溢出则不会输出
	//scanf_s("%s", szBuf, 40);

	//printf("%s", szBuf);

	char szBuf1[30] = "Hellow ";
	char szBuf2[30] = "Hellow";

	printf("第一次输出：%s \n", szBuf2);


	// strcpy(target，source) 字符串拷贝   source：拷贝数据来源 target：拷贝赋值的目标
	//strcpy(szBuf2, szBuf1);
	//printf("拷贝后：%s \n", szBuf2);

	// strcat 字符串拼接 source：拷贝数据来源 target：拷贝赋值的目标的前面
	//strcat(szBuf2, szBuf1);
	//printf("第二次输出：%s \n", szBuf2);

	//strcmp 比较两个字符串是否相等  相等则返回0 	返回值小于0 则代表 左边参数 比右边的参数 长度 反之亦然。

	int isCamp = strcmp(szBuf1, szBuf2);

	printf("%d \n", isCamp);
}

int charsDemo() {
	char ch[] = { '1','b','t' };

	printf("%s \n", ch); // 乱码输出

	char str[] = { "Hello World" };

	// 输出字符串
	printf("%s \n", str);

	// 输出字符串长度
	printf("%d \n", strlen(str));

	// 输出字符串占用内存大小 占用会在尾部补一个字节00 这个00是代表字符串的结束标记
	printf("%d \n", sizeof(str));

	char ch1[] = { '1','b','t','\0' };

	printf("%s \n", ch1); // 补了\0 字符串结束了 打印就正常
}

int chartsDemo() {

	char ch[]= { 'H','e','l','l','o'};

	char szBuf[] = "Hello World";

	// 输出字符串
	printf("%s \n", szBuf);

	// 输出字符串长度
	printf("%d \n", strlen(szBuf));

	// 输出占用大小  一般是字符串长度+1 因为后面会补1个 \0 来区分字符串的结束位置
	printf("%d \n", sizeof(szBuf));
}

int charDemo() {
	char ch = 'n';
	printf("%c", ch);
	ch = 'b';
	printf("%c \n", ch);

	char szBuf[] = { 'H','e','l','l','o','w',' ','W','o','r','l','d'};

	for (int i = 0; i < sizeof(szBuf) / sizeof(szBuf[0]); i++) {
		printf("%c", szBuf[i]);
	}

	char str[] = "Hello World";
	
	printf("\n");

	printf("%s \n", str);
	
	printf("%c", str[0]);
	
	printf("%c", str[1]);
	
	printf("%c", str[2]);
		 
}

int matrixDemo() {
	int arr[3][3] = {
		{88,56,20},
		{50,90,60},
		{100,99,88},
	};

	int nSum = 0;

	int arr_length = sizeof(arr) /  sizeof(arr[0]);

	char arr_str[3][20] = { "c语言", "汇编", "逆向" };
	
	char arr_names[3][20] = { "张三", "李四", "王五" };

	int totalStudentScore = 0; // 所有人总分

	for (int i = 0; i < arr_length; i++) {
		int item_length = sizeof(arr[i]) / sizeof(arr[i][0]);
		int total = 0;
		for(int j = 0 ; j < item_length; j++){
			printf("姓名：%s 考试科目：%s 分数：%d \n", arr_names[i],arr_str[i], arr[i][j]);
			total += arr[i][j];
		}
		totalStudentScore += total;
		printf("%s 总分：%d \n \n",arr_names[i],total);
	}

	printf("所有人总得分：%d", totalStudentScore);
}

int groupArrDemo() {
	// 11,22,33 代表第一行的3列数据 以此类推
	int arr[2][3] = { 11,22,33,111,222,333 };
	printf("%d \n", arr[0][2]);

	int arr1[] = { 6,7,8 };
	printf("%d \n", arr1[2]);

	// 行数可以不固定 但每行列数 必须指定  下面是：2列元素一行
	int arr2[][3] = { 1,2,3,4,5,6,7,8 };
	printf("%d \n", arr2[1][0]); // 4

	// 最好的定义方式 每个内大括号都是一行
	int arr3[2][3] = {
		{11,22,33},
		{44,55,66}
	}; 
	printf("%d \n", arr3[1][2]); // 66

	int arr3_length = sizeof(arr3) / sizeof(arr3[0]);

	for (int i = 0; i < arr3_length; i++) {

		int item_length = sizeof(arr3[i]) / sizeof(arr3[i][0]);

		for (int j = 0; j < item_length;j++) {

			printf("第%d行的 第%d列的值是：%d \n",i,j, arr3[i][j]);
		}
	}

	printf("%08x \n", arr3); // 输出数组的 16进制 首地址值

}


int main() {
	//groupArrDemo();

	//matrixDemo();

	//charDemo();

	//chartsDemo();

	//charsDemo();

	//charAndStrDemo();

	//arrayAndArrayChar();

	TestFun();
}
