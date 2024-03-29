#include "StudentSystemManage.h"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Students
{
	Node_t * head;
	Node_t * tail;
} Students_t;


void welcome() 
{
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

void inputStudent(Students_t * students)
{
    Node_t * fresh = (Node_t*) malloc(sizeof(Node_t));
	memset(fresh, 0, sizeof(Node_t));

    printf("请输入学生的姓名，性别，年龄，班级，寝室: ");
	
	scanf("%s %s %d %d %d", 
		fresh->student.name, 
		fresh->student.sex,
		&fresh->student.age, 
		&fresh->student.clas,
		&fresh->student.chamber);

	if (students->head == NULL)
	{
		students->head = fresh;
		students->tail = fresh;
	}
	else
	{
		students->tail->next = fresh;
		students->tail = fresh;
	}
}

void searchStudent(Students_t * students)
{
	if (students->head == NULL)
	{
		printf("没有录入学生：\n");
		return;
	}

	printf("请输入要查找的学生的名字：\n");

    char name[120] = {'\0'};
    scanf("%s", name);

	Node_t * head = students->head;

    while (head != NULL) 
    {
        if (strcmp(name, head->student.name) == 0)
        {
			printf("姓名：%s 性别：%s 年龄：%d 班级：%d 寝室：%d\n",
                head->student.name,
                head->student.sex,
                head->student.age,
                head->student.clas,
                head->student.chamber);
            return;
        }
        head = head->next;
    }

	printf("没有记录\n");
}


int main()
{
	Students_t students;
	memset(&students, 0, sizeof(students));

    while (1)
    {
        welcome();
        char c = getchar();

        switch (c)
        {
			case '1': // 录入学生信息 
				inputStudent(&students);
				break;
			case '2': // 查找学生信息 
				searchStudent(&students);
				break;
			case '3': // 退出系统
				exit(0);
				break;
			default:
				break;
        }
    }

    return 0;
}