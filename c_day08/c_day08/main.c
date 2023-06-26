#include <stdio.h>
#include <string.h>
#include <Windows.h>
int main() {
	//groupArrDemo();
	
	//matrixDemo();
		
	//charDemo();
	
	chartsDemo();
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