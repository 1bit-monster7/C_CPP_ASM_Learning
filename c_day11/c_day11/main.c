#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ��ƽṹ����Ϸ��ɫ��������
struct Player {

	// ��ɫ��
	char name[40];

	// ��ǰѪ��
	int hp;
	// ���Ѫ��
	int max_hp;

	// ��ǰ����
	int mp;
	// �������
	int max_mp;
	
	// ������
	int damage;

	// ����
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
	printf("p2��ɫ��Ϣ ������������> \n");
	printf("��ɫ���ƣ�%s \n", p2.name);
	printf("Ѫ����%d \n", p2.hp);
	printf("Ѫ�����ޣ�%d \n", p2.max_hp);
	printf("������%d \n", p2.mp);
	printf("�������ޣ�%d \n", p2.max_mp);
	printf("��������%d \n", p2.damage);
	printf("x���꣺%d \n", p2.x);
	printf("y���꣺%d \n", p2.y);


	// ��ʼ��
	struct Player p3 = { 0 };
	printf("p3��ɫ��Ϣ ������������> \n");
	printf("��ɫ���ƣ�%s \n", p3.name);
	printf("Ѫ����%d \n", p3.hp);
	printf("Ѫ�����ޣ�%d \n", p3.max_hp);
	printf("������%d \n", p3.mp);
	printf("�������ޣ�%d \n", p3.max_mp);
	printf("��������%d \n", p3.damage);
	printf("x���꣺%d \n", p3.x);
	printf("y���꣺%d \n", p3.y);
}