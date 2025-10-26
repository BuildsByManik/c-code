#include <stdio.h>

void main()
{
    int num;
    printf("Enter your number :");
    scanf("%d", &num);

    int prime = 1;

    // for (int i = 2; i < num/2; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         prime = 0;
    //         break;
    //     }

    // }

    int i = 2;

    while (i < num / 2)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
        else
        {
            i++;
            has 
        }
    }

    if (prime)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not prime");
    }
}