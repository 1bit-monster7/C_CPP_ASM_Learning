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
	printf("直接跳到我这里来无视前面!\n");

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
	printf("从循环里面跳出来\n");




}

int continueDemo() {
	for (int k = 0; k <= 100; k++) {
		if (k % 2 != 0) {
			continue; //跳过本次
		}
		printf("执行了%d 次 \n", k);

	}
}

int breakDemo() {
	for (int i = 1; i <= 100; i++) {

		if (i == 3) {
			continue; //跳过本次
		}

		printf("执行了%d 次 \n", i);

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
		printf("当前执行到 %d \n", num);
		num++;
	} while (num != 0 && num <= 1000);
}

int randomDemo() {
	//生成随机数种子
	srand(time(NULL));

	// 生成随机数 0 - 100
	int random = rand() % 100;

	// 本次生成的随机数
	printf("本次生成的随机数是 : %d \n", random);

	while (1) {
		int next = 0;

		printf("请输入一个0 - 100之间的数字 \n");

		bool flag = getchar() != '\n';

		if (next > random) {
			printf("输入的太大啦 \n");
		}
		else if (next < random) {
			printf("输入的太小啦 \n");
		}
		else {
			printf("猜对啦~ \n");
			break; // 跳出循环
		}
	}
}

int whileDemo() {
	//switchDemo();
	int count = 0;

	while (count <= 1000) {
		printf("剩余执行次数 %d \n", count);
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

	printf("其他语句");




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
	//	printf("没匹配到");
	//}




}

