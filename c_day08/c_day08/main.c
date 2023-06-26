#define _CRT_SECURE_NO_WARNINGS  // ���Ծ��� Ҫд��ͷ�ļ�ǰ��
#include <Windows.h>
#include <stdio.h>
#include <string.h>
#include<stdbool.h>

void TestFun() {
	int i = 0;
	int arr[5] = { 0 };
}

int arrayAndArrayChar() {

	// �ַ�����
	char szBuf[] = { 1,2,3,4,5 };

	// �ַ�����
	char szBuf1[] = { 'h','e','l','l','o','w' };

	// ʵ���ַ���  �ַ� + ���� + \0 ȷ���ַ�������ʶλ  
	char szBuf2[] = { 'h','e','l','l','o','w','\0' };

	// �ڶ��ֶ��巽ʽ ʵ���ַ��� ���������Զ��� �ַ�β�� ���\0 ��ʶ
	char szBuf3[] = "��������";

	// �ַ��� ���� \0 �ͽ����� �����������
	char szBuf4[] = { 'n','b','\0','1','b','i','t' };
	printf("%s \n", szBuf4);
}

int charAndStrDemo() {

	// & ȡַ������  scanf_s Ĭ����Ҫ�����ֵַ ������ͨ���͵�ֵһ�㶼Ҫ&num  ������ֵ����ͷ����׵�ֵַ ���Բ���Ҫ���� & 
	//char szBuf[40];

	// �涨scanf_s ����ĳ��� ȷ���ַ��������Ƶ� �ڴ��С������ ����򲻻����
	//scanf_s("%s", szBuf, 40);

	//printf("%s", szBuf);

	char szBuf1[30] = "Hellow ";
	char szBuf2[30] = "Hellow";

	printf("��һ�������%s \n", szBuf2);


	// strcpy(target��source) �ַ�������   source������������Դ target��������ֵ��Ŀ��
	//strcpy(szBuf2, szBuf1);
	//printf("������%s \n", szBuf2);

	// strcat �ַ���ƴ�� source������������Դ target��������ֵ��Ŀ���ǰ��
	//strcat(szBuf2, szBuf1);
	//printf("�ڶ��������%s \n", szBuf2);

	//strcmp �Ƚ������ַ����Ƿ����  ����򷵻�0 	����ֵС��0 ����� ��߲��� ���ұߵĲ��� ���� ��֮��Ȼ��

	int isCamp = strcmp(szBuf1, szBuf2);

	printf("%d \n", isCamp);
}

int charsDemo() {
	char ch[] = { '1','b','t' };

	printf("%s \n", ch); // �������

	char str[] = { "Hello World" };

	// ����ַ���
	printf("%s \n", str);

	// ����ַ�������
	printf("%d \n", strlen(str));

	// ����ַ���ռ���ڴ��С ռ�û���β����һ���ֽ�00 ���00�Ǵ����ַ����Ľ������
	printf("%d \n", sizeof(str));

	char ch1[] = { '1','b','t','\0' };

	printf("%s \n", ch1); // ����\0 �ַ��������� ��ӡ������
}

int chartsDemo() {

	char ch[]= { 'H','e','l','l','o'};

	char szBuf[] = "Hello World";

	// ����ַ���
	printf("%s \n", szBuf);

	// ����ַ�������
	printf("%d \n", strlen(szBuf));

	// ���ռ�ô�С  һ�����ַ�������+1 ��Ϊ����Ჹ1�� \0 �������ַ����Ľ���λ��
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

	char arr_str[3][20] = { "c����", "���", "����" };
	
	char arr_names[3][20] = { "����", "����", "����" };

	int totalStudentScore = 0; // �������ܷ�

	for (int i = 0; i < arr_length; i++) {
		int item_length = sizeof(arr[i]) / sizeof(arr[i][0]);
		int total = 0;
		for(int j = 0 ; j < item_length; j++){
			printf("������%s ���Կ�Ŀ��%s ������%d \n", arr_names[i],arr_str[i], arr[i][j]);
			total += arr[i][j];
		}
		totalStudentScore += total;
		printf("%s �ܷ֣�%d \n \n",arr_names[i],total);
	}

	printf("�������ܵ÷֣�%d", totalStudentScore);
}

int groupArrDemo() {
	// 11,22,33 �����һ�е�3������ �Դ�����
	int arr[2][3] = { 11,22,33,111,222,333 };
	printf("%d \n", arr[0][2]);

	int arr1[] = { 6,7,8 };
	printf("%d \n", arr1[2]);

	// �������Բ��̶� ��ÿ������ ����ָ��  �����ǣ�2��Ԫ��һ��
	int arr2[][3] = { 1,2,3,4,5,6,7,8 };
	printf("%d \n", arr2[1][0]); // 4

	// ��õĶ��巽ʽ ÿ���ڴ����Ŷ���һ��
	int arr3[2][3] = {
		{11,22,33},
		{44,55,66}
	}; 
	printf("%d \n", arr3[1][2]); // 66

	int arr3_length = sizeof(arr3) / sizeof(arr3[0]);

	for (int i = 0; i < arr3_length; i++) {

		int item_length = sizeof(arr3[i]) / sizeof(arr3[i][0]);

		for (int j = 0; j < item_length;j++) {

			printf("��%d�е� ��%d�е�ֵ�ǣ�%d \n",i,j, arr3[i][j]);
		}
	}

	printf("%08x \n", arr3); // �������� 16���� �׵�ֵַ

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
