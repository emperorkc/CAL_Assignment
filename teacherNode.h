#include "teacher.h"

typedef struct teacherNode* teacherNodePtr;

typedef struct teacherNode {
	teacherType teacher;
	teacherNodePtr next;
} teacherNodeType;