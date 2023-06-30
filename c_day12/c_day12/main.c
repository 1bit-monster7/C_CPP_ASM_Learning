#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>

struct Player {
	char name[40];
	int hp;
	int mp;
	int max_hp;
	int max_mp;
};


struct Info {
	int cur;
	int max;
};

struct Monster {
	char m_name[40];
	struct Info hp;
	struct Info mp;
	int damage;
	int lv;
	int x;
	int y;
};

void personPointer();
void arrStruct();

int main() {

	personPointer();
	arrStruct();



	return 0;
}

void arrStruct() {

	struct Monster Mon_Arr[5] = { 0 };
	for (int i = 0; i < sizeof(Mon_Arr) / sizeof(Mon_Arr)[0]; i++) {
		sprintf(Mon_Arr[i].m_name, "大逼哥%d", i);
		Mon_Arr[i].hp.cur = i + 10;
		Mon_Arr[i].hp.max = 1000;
		Mon_Arr[i].mp.cur = i + 200;
		Mon_Arr[i].mp.max = 2000;
		Mon_Arr[i].damage = i + 99;
		Mon_Arr[i].lv = i;
		Mon_Arr[i].x = i + 10;
		Mon_Arr[i].y = i + 5;

		printf("怪物名称：%s | 怪物血量：%d | 怪物最大血量：%d | 怪物蓝量：%d | 怪物最大蓝量：%d | 怪物攻击力：%d | 怪物等级：%d | 怪物x坐标：%d |  怪物y坐标：%d \n",
			Mon_Arr[i].m_name,
			Mon_Arr[i].hp.cur,
			Mon_Arr[i].hp.max,
			Mon_Arr[i].mp.cur,
			Mon_Arr[i].mp.max,
			Mon_Arr[i].damage,
			Mon_Arr[i].lv,
			Mon_Arr[i].x,
			Mon_Arr[i].y
		);
	};
}


void personPointer() {
	struct Player p1 = {
		"1bit",
		88,
		120,
		130,
		140
	};

	p1.hp = 100;

	struct Player* p2 = &p1;

	p2->hp = 300; // 通过指针访问变量值
	p2->max_hp = 200;

	printf("%d \n", p1.hp);
	printf("%d \n", p1.mp);


	int num = 10;
	int* num2 = &num;
	*num2 = 30; // 通过地址访问变量值
	printf("num2 %p \n", num2);

}
