#define _CRT_SECURE_NO_WARNINGS
#define MAX_USER_COUNT 100 // ����û�����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��������
void showMenu(struct System* op, char firstRuning[40]);
void runMenu(int code, struct System* op);
void updateUser(struct System* op);
void addUser(struct System* op, int updateIndex);
void removeUser(struct System* op);
void showList(struct System* op);
void findUser(struct System* op);
void changeListFormIndex(struct System* op, int index);
void arrReset(struct System* op);
int arrNoneMsg(struct System* op, char msg[40]);
int getDetils(struct System* op);

// struct �ṹ�嶨��
struct User {
	char name[40]; // ��ʮ���ַ� һ������ռ2�ֽ�  ass�� 1���ֽڵ������� ���󲿷ֺ��־���2���ֽ� 
	char password[40]; // ��ʮ���ַ� һ������ռ2�ֽ�
	char key[40]; // ��ʮ���ַ� һ������ռ2�ֽ�
	int lv;
};

struct System {
	int total;
	struct User user_list[MAX_USER_COUNT];
};

int main() {

	// ��ʼ���������� operating ���� �����б�

	struct System operating = { 0 };

	showMenu(&operating, "first"); // first

	return 0;
}

void showMenu(struct System* op, char firstRuning[40]) {

	// ���״�ִ��ʱ���� ��ͣ���� ��������Ļ
	if (firstRuning != "first") system("pause") && system("cls");

	printf("���������������������������������� \n");
	printf("| ��������  1.��ʾ�û�  �������� |	 \n");
	printf("| ��������  2.�����û�  �������� |	 \n");
	printf("| ��������  3.ɾ���û�  �������� |	 \n");
	printf("| ��������  4.�޸��û�  �������� |	 \n");
	printf("| ��������  5.�����û�  �������� |	 \n");
	printf("| ��������  6.���ϵͳ  �������� |	 \n");
	printf("| ��������  7.�˳�ϵͳ  �������� |	 \n");
	printf("���������������������������������� \n");

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
		findUser(op);
		break;
	case 6:
		arrReset(op);
		break;
	case 7:
		printf("������ֹ����");
		exit(0); // �������̣��˳��룩
		return;
	default:
		printf("δƥ��Ĳ���������ȷ�����������");
		break;
	}

	showMenu(op, "not first");
}

void arrReset(struct System* op) {

	if (arrNoneMsg(op, "���") == 0) return;

	// ��սṹ������
	memset(op, 0, sizeof(op));
	printf("reset successful \n~");
	return 0;
}

void updateUser(struct System* op) {

	if (arrNoneMsg(op, "�޸�") == 0) return;

	int index = getDetils(op);

	if (index != -1) {
		addUser(op, index);
	}
};

void changeListFormIndex(struct System* op, int index) {


	printf("�������û����ƣ�");

	char name[39] = { 0 };
	scanf_s("%s", name, sizeof(name));

	printf("���������룺");

	char password[39] = { 0 };

	scanf_s("%s", password, sizeof(password));

	printf("�����뿨�ܣ�");

	char key[39] = { 0 };

	scanf_s("%s", key, sizeof(key));

	printf("�������û��ȼ���");

	int lv = 0 ;

	scanf_s("%d", &lv);

	strcpy(op->user_list[index].name, name); // �ַ�����ֵ
	strcpy(op->user_list[index].password, password); // �ַ�����ֵ
	strcpy(op->user_list[index].key, key); // ����
	op->user_list->lv = lv; // �ȼ�
}

void addUser(struct System* op, int updateIndex) {


	if (updateIndex != -1) {
		changeListFormIndex(op, updateIndex);
		printf("�޸ĳɹ�! ������չʾ���µ��û��б� \n");
	}
	else {
		changeListFormIndex(op, op->total);
		op->total++; //����
		printf("�����ɹ�! ������չʾ���µ��û��б� \n");
	}

	showList(op);
};

void showList(struct System* op) {
	if (arrNoneMsg(op, "��ȡ�б�") == 0) return;

	for (int i = 0; i < op->total; i++) {
		printf("�±꣺%d���û�����%s���û����룺%s�����ܣ�%s���ȼ���%d \n", i + 1, op->user_list[i].name, op->user_list[i].password, op->user_list[i].key,op->user_list[i].lv );
	}
}

void removeUser(struct System* op) {

	if (arrNoneMsg(op, "ɾ��") == 0) return;
	 
	int index = getDetils(op);

	if (index !=-1){

		for (int j = index; j < op->total; j++) {
			op->user_list[j] = op->user_list[j + 1];
		}

		op->total--; //���ȼ�1

		printf("ɾ���ɹ�! \n~");

		showList(op);
	}

};

void findUser(struct System * op ) {
	int i = getDetils(op);
	if (i != -1) {
		printf("�ɹ�!�û���ϸ��Ϣ��������%s ���룺%s key��%s lv��%d \n",op->user_list[i].name,op->user_list[i].password,op->user_list[i].key,op->user_list[i].lv);
	};
}

int getDetils(struct System *op) {

	arrNoneMsg(op, "����");

	printf("������Ҫ���ҵĵ��û�����\n");

	char name[39] = { 0 };

	scanf_s("%s", name, sizeof(name));

	int flag = 0;

	for (int i = 0; i < op->total; i++) {
		if (strcmp(op->user_list[i].name, name) == 0) {
			return i;
		}
	}

	if (flag == 0) {
		printf("δ���ҵ��κ��û�ƥ�� ����ȷ��������û����Ƿ���ȷ��");
		return -1;
	}

};

int arrNoneMsg(struct System* op, char msg[40]) {
	if (op->total <= 0) {
		printf("��ǰ���ݿ������κ����ݣ�������Ӻ��٣�%s��\n", msg);
		return 0;
	}
	else {
		return 1;
	}
}