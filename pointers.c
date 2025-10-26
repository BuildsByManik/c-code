// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int var;
    printf("Enter the number : \n");
    scanf("%d", &var);
    
    int* p = &var;
    
    printf("%d this is call by value \n",var); //call  by value
    
    printf("%d this is call by refrence", *p); //call by refrence
    
    return 0;
}