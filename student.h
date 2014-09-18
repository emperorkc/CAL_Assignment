#include<stdio.h>
#include<teacherNode.h>
#include<courseNode.h>


typedef struct Student
{
int id;
char* name;
teacherNodeType teachers;
courseNodeType currentCourseList;
} StudentType