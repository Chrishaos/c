#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _Student
{
	int age;
	int clas;
	int chamber;
	char name[128];
	char sex[8];
} Student;

typedef struct _Node
{
	Student student;
	struct _Node* next;
} Node;

void welcome();

void inputStudent(Node ** head, Node ** tail);

void searchStudent(Node * head);
