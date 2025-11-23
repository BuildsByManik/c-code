#include <stdio.h>
#include <string.h>

struct student{
    char name[30];
    int rollNo;
};

void main(){
    struct student s1;

    strcpy(s1.name,"Manik");
    s1.rollNo = 14;
    
    printf("%s \n", s1.name);
    printf("%d", s1.rollNo);
}