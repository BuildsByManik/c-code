#include <stdio.h>

int main() 
{
    int op,num, snum, result;

    printf("Simple Calculator\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n Enter your option: \n");
    scanf("%d",&op);

    printf ("Enter your first number: ");
    scanf ("%d",&num);
    printf ("Enter your second number: ");
    scanf ("%d",&snum);

    switch(op) 
	{
        case 1:
            result = num+snum;
            printf("%d", result);
            break;
        case 2:
            result = num-snum;
            printf("%d", result);
            break;
        case 3:
            result = num*snum;
            printf("%d", result);
            break;
        case 4:
            if (snum != 0)
			{
                result = num/snum;
                printf("%d", result);
            } else 
			{
                printf("Error! Division by zero.");
            }
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}