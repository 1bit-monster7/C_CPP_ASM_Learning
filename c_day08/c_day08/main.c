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