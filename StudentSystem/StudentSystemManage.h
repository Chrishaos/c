#ifndef STUDENT_SYSTEM_MANAGE_H 
#define STUDENT_SYSTEM_MANAGE_H

typedef struct Student
{
	int age;
	int clas;
	int chamber;
	char name[128];
	char sex[8];
} Student_t;

typedef struct Node
{
	Student_t student;
	struct Node * next;
} Node_t;

#endif // STUDENT_SYSTEM_MANAGE_H 
