#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 设计结构体游戏角色人物属性
struct Player {

	// 角色名
	char name[40];

	// 当前血量
	int hp;
	// 最大血量
	int max_hp;

	// 当前蓝量
	int mp;
	// 最大蓝量
	int max_mp;
	
	// 攻击力
	int damage;

	// 坐标
	int x;
	int y;
};

int main() { 
	
	/*struct Player p1;

	strcpy(p1.name, "0xcc");

	printf("%s \n", p1.name);*/


	struct Player p2 = {
		"1bit",
		100,
		101,
		200,
		201,
		10,
		1920,
		1080
	};
	printf("p2角色信息 ——————> \n");
	printf("角色名称：%s \n", p2.name);
	printf("血量：%d \n", p2.hp);
	printf("血量上限：%d \n", p2.max_hp);
	printf("蓝量：%d \n", p2.mp);
	printf("蓝量上限：%d \n", p2.max_mp);
	printf("攻击力：%d \n", p2.damage);
	printf("x坐标：%d \n", p2.x);
	printf("y坐标：%d \n", p2.y);


	// 初始化
	struct Player p3 = { 0 };
	printf("p3角色信息 ——————> \n");
	printf("角色名称：%s \n", p3.name);
	printf("血量：%d \n", p3.hp);
	printf("血量上限：%d \n", p3.max_hp);
	printf("蓝量：%d \n", p3.mp);
	printf("蓝量上限：%d \n", p3.max_mp);
	printf("攻击力：%d \n", p3.damage);
	printf("x坐标：%d \n", p3.x);
	printf("y坐标：%d \n", p3.y);
}