#include "StudentSystemManage.h"

int main()
{
	//创建头结点
	Node* head = (Node*)malloc(sizeof(Node));
	head->next = NULL;

	while (1)
	{

		welcome();
		char c = _getch();

		switch (c)
		{
		case '1'://录入学生信息
			inputStudent(head);
			break;
		case '2'://查找学生信息
			searchStudent(head);
			break;
		case '3'://退出系统
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
	printf("*\t学生管理系统\t\t*\n");
	printf("*********************************\n");
	printf("*\t请选择功能列表\t\t*\n");
	printf("*********************************\n");
	printf("*\t1.录入学生信息\t\t*\n");
	printf("*\t2.查找学生信息\t\t*\n");
	printf("*\t3.退出系统\t\t*\n");
	printf("*********************************\n");
	}

void inputStudent(Node* head)
{
	Node* fresh = (Node*)malloc(sizeof(Node));
	fresh->next = NULL;
	printf("请输入学生的姓名，性别，年龄，班级，寝室");
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
		//将学生插入到尾部
		move->next = fresh;
		//暂停程序
		system("pause");
		//清空控制台
		system("cls");
}

void searchStudent(Node* head)
{
	printf("请输入要查找的学生的名字：/n");
	char Name[20];
	scanf("%c", &Name);
	Node* move = move->next;
	{
	while (move != NULL)
		if (Name == move->student.Name)
		{
			printf("姓名：%c 性别：%c 年龄：%d 班级：%d 寝室：%d\n",
				move->student.Name,
				move->student.sex,
				move->student.age,
				move->student.clas,
				move->student.chamber);
			//暂停程序
			system("pause");
			//清空控制台
			system("cls");
			return;
		}
		move = move->next;
		}
	printf("没有记录/n");
	//暂停程序
	system("pause");
	//清空控制台
	system("cls");
}