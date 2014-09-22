#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "main.h"


int readline(char s[],int lim)
    {
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
      s[i] = c;
      ++i;
    }
    s[i] = '\0';
    return i;
}

int charReader() {
            int* studentNumber = (int*) malloc (sizeof (int) * 8);
            char* studentName = (char*) malloc (sizeof (char) * 32);
            char text[100];
            while(readline(text, 100) > 0) {
                if(sscanf(text, "S %d %s", studentNumber,studentName)) {
                    StudentType student;
                    student.id->studentNumber;
                    student.name->studentName;
                    printf("%s %s\n", student.getname(&student) student.getId(&student));
                }
            }
            return 1;
    }


int main() {
	charReader();
	return 1;

}
/*int main() {
            FILE *fp;
            fp = fopen("list.txt", "r");
            fileReader(fp);
            return 1;
    }
*/
