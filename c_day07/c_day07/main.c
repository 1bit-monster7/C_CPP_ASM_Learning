#include <stdio.h>
#include <stdbool.h>
int main() {

	//arrDemo();
	//arrMaxDemo();
	//arrSortDemo();
	//maxSortDemo();
	bubbleSort();
}

int bubbleSort() {

	int arr[] = { 1,5,3,4,2 };
	int arr_length = sizeof(arr) / sizeof(arr[0]);
	int total = 0;
	printf("����ǰ������Ϊ��\n");

	for (int i = 0; i < arr_length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < arr_length - 1; i++) {
		total++;
		for (int j = 0; j < arr_length - 1 - i; j++) {
			total++;
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("�����ܴ���%d��\n", total);



	printf("����������Ϊ��\n");
	for (int i = 0; i < arr_length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int maxSortDemo() {
	int arr[] = { 1,4,3,4 ,3 };
	int flag = 0;  // 0 �����С���� 1 ����Ӵ�С
	int arr_length = sizeof(arr) / sizeof(arr[0]);
	int arr_max = arr_length - 1;


	for (int i = 0; i < arr_length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	int total = 0;

	for (int i = 0; i < arr_length; i++) {
		total++;
		for (int j = i + 1; j < arr_length; j++) {
			total++;
			int startNum = arr[i];
			int nextNum = arr[j];
			if ((!flag && nextNum < startNum) || (flag && nextNum > startNum)) {
				arr[i] = nextNum;
				arr[j] = startNum;
			}
		}
	}


	printf("%d \n", total);
	;
	printf("����������Ϊ��\n");
	for (int i = 0; i < arr_length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");


}

int arrSortDemo() {
	int arr[] = { 1,2,3,4,5,6 };
	int arr_length = sizeof(arr) / sizeof(arr[0]);
	int arr_max = arr_length - 1;

	bool isOdd = arr_length % 2 != 0; // �Ƿ���ż��

	printf("����ǰ%d��\n", isOdd);

	for (int i = 0; i < arr_length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");


	for (int i = 0; i < arr_length / 2; i++) {

		int temp = arr[i];  // ʹ����ʱ�������浱ǰԪ�ص�ֵ

		arr[i] = arr[arr_max - i];

		arr[arr_max - i] = temp;

	}

	printf("����������Ϊ��\n");
	for (int i = 0; i < arr_length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}

int arrMaxDemo() {
	int arr[] = { 1,2,3,4,44,3333,1234,8,9,99,100 };
	int arr_length = sizeof(arr) / sizeof(arr[0]);
	int max = 0;

	for (int i = 0; i < arr_length; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf("Max��%d \n", max);
}

int arrDemo() {

	//int arr[5] = { 0 };
	////%x == HEX  ʮ���������
	//// ���һ��������� �õ����� �׸�Ԫ�ص��ڴ��ֵַ �����������ڴ��� ���ٵĿռ��������� 
	//printf("%08x \n", arr);

	int arr[5] = { 0 };
	int arr_length = sizeof(arr) / sizeof(arr[0]);
	printf("%d \n", arr_length);

	for (int i = 0; i < arr_length; i++) {
		printf("�������%d����ҵĳ�ֵ�� \n", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (int j = 0; j < arr_length; j++) {
		printf("��%d����ҵĳ�ֵ����ǣ�%d \n", j + 1, arr[j]);
	}
}