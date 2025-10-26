#include <stdio.h>
#include <stdbool.h>
void main()
{
    int num, Snum, op;
    printf("Choose between 1 to 4:\n1.Add \n2.Subtract \n3. Multiply \n4.Division \n");
    printf("Enter your first number:");
    scanf("%d",&num);

    printf("Enter your second number");
    scanf("%d",&Snum);

    printf("Enter your operater");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        printf("Sum is %d", num + Snum);
        break;

    case 2:
        printf("Subtract is %d", num - Snum);
        break;

    case 3:
        printf("Multiply is %d", num * Snum);
        break;

    case 4:
        printf("Division is %d", num / Snum);
        break;
    }
}