#include <stdio.h>
#include "studentNode.h"
#include "teacher.h"
typedef struct course *courseTypePtr;

typedef struct course
{
	int ID;
	char* name;
	int semesterNum;
	studentNodePtr studentNode;
	teacher *teacherPtr;
} courseType;