#include <stdio.h>

void main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    int temp = n;
    int count = 0;

    while (temp>0)
    {
       temp /= 10;
       count++; 
    }

    printf("The number have %d digits",count);
    
}