#include <stdio.h>
#include <stdbool.h>

void main()
{
    printf("Choose between 1 to 4:\n1.Add \n2.Sub \n3.Multiply \n4.Divide \n5.Stop");
    int n1, n2, op;

    while (true)
    {
        printf("Enter 1st number:");
        scanf("%d", &n1);

        printf("Enter 2nd number:");
        scanf("%d", &n2);

        printf("Enter operation of your choice:");
        scanf("%d", &op);

        if (op == 5)
        {
            break;
        }
        
        switch (op)
        {
        case 1:
            printf("Sum is %d", n1 + n2);
            break;
        case 2:
            printf("Sub is %d", n1 - n2);
            break;
        case 3:
            printf("Multipy is %d", n1 * n2);
            break;
        case 4:
            printf("Divide is %d", n1 / n2);
            break;
        default:
            printf("Enter a valid choice!!");
            break;
            case 5:
            printf("Divide")
    }
}