#include "StudentSystemManage.h"

int main()
{
	//����ͷ���
	Node* head = (Node*)malloc(sizeof(Node));
	head->next = NULL;

	while (1)
	{

		welcome();
		char c = _getch();

		switch (c)
		{
		case '1'://¼��ѧ����Ϣ
			inputStudent(head);
			break;
		case '2'://����ѧ����Ϣ
			searchStudent(head);
			break;
		case '3'://�˳�ϵͳ
			exit(0);
			break;
		default:
			break; 
		}
	}

	return 0;
}

void welcome(){
	printf("*********************************\n");
	printf("*\tѧ������ϵͳ\t\t*\n");
	printf("*********************************\n");
	printf("*\t��ѡ�����б�\t\t*\n");
	printf("*********************************\n");
	printf("*\t1.¼��ѧ����Ϣ\t\t*\n");
	printf("*\t2.����ѧ����Ϣ\t\t*\n");
	printf("*\t3.�˳�ϵͳ\t\t*\n");
	printf("*********************************\n");
	}

void inputStudent(Node* head)
{
	Node* fresh = (Node*)malloc(sizeof(Node));
	fresh->next = NULL;
	printf("������ѧ�����������Ա����䣬�༶������");
		scanf("%c,%c,%d,%d,%d", fresh->student.Name,
			fresh->student.sex,
			&fresh->student.age, 
			&fresh->student.clas, 
			&fresh->student.chamber);

		Node* move = head;
		while (move->next != NULL)
		{
			move = move->next;
		}
		//��ѧ�����뵽β��
		move->next = fresh;
		//��ͣ����
		system("pause");
		//��տ���̨
		system("cls");
}

void searchStudent(Node* head)
{
	printf("������Ҫ���ҵ�ѧ�������֣�/n");
	char Name[20];
	scanf("%c", &Name);
	Node* move = move->next;
	{
	while (move != NULL)
		if (Name == move->student.Name)
		{
			printf("������%c �Ա�%c ���䣺%d �༶��%d ���ң�%d\n",
				move->student.Name,
				move->student.sex,
				move->student.age,
				move->student.clas,
				move->student.chamber);
			//��ͣ����
			system("pause");
			//��տ���̨
			system("cls");
			return;
		}
		move = move->next;
		}
	printf("û�м�¼/n");
	//��ͣ����
	system("pause");
	//��տ���̨
	system("cls");
}