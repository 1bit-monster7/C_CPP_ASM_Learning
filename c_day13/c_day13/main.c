#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数定义
void showMenu(struct System* op, char firstRuning[40]);
void runMenu(int code, struct System* op);
void updateUser(struct System* op);
void addUser(struct System* op, int updateIndex);
void removeUser(struct System* op);
void showList(struct System* op);
void changeListFormIndex(struct System* op, int index);
void getDetils(struct System* op);
void arrReset(struct System* op);
int arrNoneMsg(struct System* op, char msg[40]);

// struct 结构体定义
struct User {
	char name[40]; // 四十个字符 一个汉字占2字节
	char password[40]; // 四十个字符 一个汉字占2字节
	char key[40]; // 四十个字符 一个汉字占2字节
};

struct System {
	int total;
	struct User user_list[100];
};



int main() {

	// 初始化操作对象 operating 包含 数据列表

	struct System operating = { 0 };

	showMenu(&operating, "first"); // first

	return 0;
}

void showMenu(struct System* op, char firstRuning[40]) {

	// 非首次执行时持续 暂停程序 且清理屏幕
	if (firstRuning != "first") system("pause") && system("cls");

	printf("————————————————— \n");
	printf("| ————  1.显示用户  ———— |	 \n");
	printf("| ————  2.增加用户  ———— |	 \n");
	printf("| ————  3.删除用户  ———— |	 \n");
	printf("| ————  4.修改用户  ———— |	 \n");
	printf("| ————  5.查找用户  ———— |	 \n");
	printf("| ————  6.清空系统  ———— |	 \n");
	printf("| ————  7.退出系统  ———— |	 \n");
	printf("————————————————— \n");

	int code = 0;

	scanf_s("%d", &code);

	runMenu(code, op);

}

void runMenu(int code, struct System* op) {

	switch (code) {
	case 1:
		showList(op);
		break;
	case 2:
		addUser(op, -1);
		break;
	case 3:
		removeUser(op);
		break;
	case 4:
		updateUser(op);
		break;
	case 5:
		getDetils(op);
		break;
	case 6:
		arrReset(op);
		break;
	case 7:
		printf("程序终止结束");
		exit(0); // 结束进程（退出码）
		return;
	default:
		printf("未匹配的操作符，请确认输入的数字");
		break;
	}

	showMenu(op, "not first");
}

void arrReset(struct System* op) {

	if (arrNoneMsg(op, "清空") == 0) return;

	// 清空结构体数组
	memset(op, 0, sizeof(op));
	printf("reset successful \n~");
	return 0;
}

void updateUser(struct System* op) {

	if (arrNoneMsg(op, "修改") == 0) return;

	printf("请输入要修改的用户名：\n");

	char name[78] = { 0 };

	scanf_s("%s", name, sizeof(name));

	int index = -1;

	for (int i = 0; i < op->total; i++) {
		// 匹配相等
		if (strcmp(op->user_list[i].name, name) == 0) {
			index = i;
		}
	}

	if (index == -1) return printf("未查询到该名称的用户.. \n");

	addUser(op, index);


};

void changeListFormIndex(struct System* op, int index) {

	printf("请输入用户名称：");

	char name[39] = { 0 };

	scanf_s("%s", name, sizeof(name));

	printf("请输入密码：");

	char password[39] = { 0 };

	scanf_s("%s", password, sizeof(password));

	printf("请输入卡密：");

	char key[39] = { 0 };

	scanf_s("%s", key, sizeof(key));
	strcpy(op->user_list[index].name, name); // 字符串赋值
	strcpy(op->user_list[index].password, password); // 字符串赋值
	strcpy(op->user_list[index].key, key); // 卡密
}

void addUser(struct System* op, int updateIndex) {


	if (updateIndex != -1) {
		changeListFormIndex(op, updateIndex);
		printf("修改成功! 接下来展示最新的用户列表 \n");
	}
	else {
		changeListFormIndex(op, op->total);
		op->total++; //自增
		printf("新增成功! 接下来展示最新的用户列表 \n");
	}

	showList(op);
};

void showList(struct System* op) {
	if (arrNoneMsg(op, "获取列表") == 0) return;


	for (int i = 0; i < op->total; i++) {
		printf("index：%d，用户名：%s，用户密码：%s，卡密：%s \n", i + 1, op->user_list[i].name, op->user_list[i].password, op->user_list[i].key);
	}
}

void removeUser(struct System* op) {

	if (arrNoneMsg(op, "删除") == 0) return;


	showList(op);

	printf("请输入要删除的用户名：\n");

	char name[78] = "";

	scanf_s("%s", name, sizeof(name));

	int index = -1;

	for (int i = 0; i < op->total; i++) {
		// 匹配相等
		if (strcmp(op->user_list[i].name, name) == 0) {
			index = i;
		}
	}

	if (index == -1) return printf("未查询到该名称的用户.. \n");

	for (int j = index; j < op->total; j++) {
		op->user_list[j] = op->user_list[j + 1];
	}

	op->total--; //长度减1

	printf("delete successful \n~");

	showList(op);

};

void getDetils(struct System* op) {

	arrNoneMsg(op, "查找");

	printf("请输入要查找的的用户名：\n");

	char name[78] = { 0 };

	scanf_s("%s", name, sizeof(name));

	int flag = 0;

	for (int i = 0; i < op->total; i++) {
		if (strcmp(op->user_list[i].name, name) == 0) {
			printf("查找成功！以下是该用户详细信息\n 姓名：%s 密码：%s key：%s \n", op->user_list->name, op->user_list->password, op->user_list->key);
			flag = 1;
		}
	}

	if (flag == 0) {
		printf("未查找到任何用户匹配 ，请确认输入的用户名是否正确！");
	}

};

int arrNoneMsg(struct System* op, char msg[40]) {
	if (op->total <= 0) {
		printf("当前数据库中无任何数据，请先添加后再：%s！\n", msg);
		return 0;
	}
	else {
		return 1;
	}
}