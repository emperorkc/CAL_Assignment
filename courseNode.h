#include <stdio.h>
#include "course.h"

typedef struct courseNode* courseNodePtr;

typedef struct courseNode
{
	course *coursePtr;
	courseNodePtr next;
} courseNodeType;