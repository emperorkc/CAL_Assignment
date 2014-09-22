#include "stdio.h"
#include "student.h"

typedef struct studentNode *StudentNodeTypePtr;
typedef struct studentNode
{
StudentType student;
StudentNodeTypePtr next;

}StudentNodeType;
