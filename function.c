#include <stdio.h>
void table (int a){
    for (int i = 0; i < 11; i++)
    {
        printf("%d",a*i);
    }
}
void main(){
    int a;
    printf("Enter your no."); 
    scanf("%d",&a);
    table(a);
}