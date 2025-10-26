#include <stdio.h>

// void main(){

//     int n;
//     printf("Enter your number :");
//     scanf("%d", &n);

//     int temp = n;

//     int res = 1;

//     for (int i = 1; i <= temp; i++)
//     {
//         res = res*i;
//     }
    
//     printf("The factorial of %d is %d",n,res);
// }

void main(){
    int n;
    printf("Enter your number :");
    scanf("%d", &n);

    int temp = n;

    int res = 1;

    while (temp > 1)
    {
        res = res*temp;
        temp--;
    }
    printf("The factorial of %d is %d",n,res);
}