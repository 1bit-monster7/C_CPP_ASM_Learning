#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<time.h>
int main() {

	//randomDemo();

	//doWhileDemo();

	//forDemo();

	//breakDemo();

	//continueDemo();

	gotoDemo();

}

int gotoDemo() {

	goto FLAG;
	printf("1");
	printf("2");
	printf("3");
	printf("4");

FLAG:
	printf("ֱ������������������ǰ��!\n");

	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			for (int b = 0; b <= 10; b++) {
				printf("%d\n", b);
				if (b == 10) {
					goto TFLAG;
				}
			}

		}
	}


TFLAG:
	printf("��ѭ������������\n");




}

int continueDemo() {
	for (int k = 0; k <= 100; k++) {
		if (k % 2 != 0) {
			continue; //��������
		}
		printf("ִ����%d �� \n", k);

	}
}

int breakDemo() {
	for (int i = 1; i <= 100; i++) {

		if (i == 3) {
			continue; //��������
		}

		printf("ִ����%d �� \n", i);

		if (i == 5) {
			break;
		}
	}
}

int forDemo() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d * %d = %d \t", j, i, i * j);
			j == i ? printf("\n") : "";
		}
	}

	printf("\n");

	printf("\n");

	printf("\n");


	int x = 1;
	int y = 1;

	while (x <= 9) {
		y = 1;
		while (y <= x) {
			printf("%d * %d = %d \t", y, x, x * y);
			y++;
		}
		x++;
		printf("\n");
	}


}

int doWhileDemo() {
	int num = 0;
	do
	{
		printf("��ǰִ�е� %d \n", num);
		num++;
	} while (num != 0 && num <= 1000);
}

int randomDemo() {
	//�������������
	srand(time(NULL));

	// ��������� 0 - 100
	int random = rand() % 100;

	// �������ɵ������
	printf("�������ɵ�������� : %d \n", random);

	while (1) {
		int next = 0;

		printf("������һ��0 - 100֮������� \n");

		bool flag = getchar() != '\n';

		if (next > random) {
			printf("�����̫���� \n");
		}
		else if (next < random) {
			printf("�����̫С�� \n");
		}
		else {
			printf("�¶���~ \n");
			break; // ����ѭ��
		}
	}
}

int whileDemo() {
	//switchDemo();
	int count = 0;

	while (count <= 1000) {
		printf("ʣ��ִ�д��� %d \n", count);
		count++;
	}
	return 0;
}

int switchDemo() {
	int num = 7;


	switch (num)
	{
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	case 3:
		printf("3");
	default:
		break;
	}

	return 0;

	printf("�������");




	//if (num == 1) {
	//	printf("1");
	//}
	//else if (num == 2) {
	//	printf("2");
	//}
	//else if (num == 3) {
	//	printf("3");
	//}
	//else if (num == 4) {
	//	printf("4");
	//}
	//else if (num == 5) {
	//	printf("5");
	//}
	//else {
	//	printf("ûƥ�䵽");
	//}




}

