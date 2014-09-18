#include<stdio.h>
#include<teacherNode.h>
#include<courseNode.h>


typedef struct Student
{
int id;
char* name;
Teacher* teachers;
Course* currentCourseList;
} StudentType