#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//ѧ����Ϣ
typedef struct _Student
{
	int age;
	int clas;
	int chamber;
	char Name[20];
	char sex[20];
}Student;

//�����Ϣ
typedef struct _Node
{
	Student student;
	struct _Node* next;
}Node;

void welcome();

void inputStudent(Node* head);

void searchStudent(Node* head);