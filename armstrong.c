// #include <stdio.h>

// int main()
// {
//     int num, dig, remainder, n=0 , result=0 , power;

//     printf("Enter a Number: ");
//     scanf("%d", &num);

//     dig = num;
//     while (dig != 0)
// 	{
//         dig /= 10;
//         n++;
//     }
//     dig = num;
//     while (dig != 0)
// 	{
//         remainder = dig % 10;
//         power = 1;
//         for(int i = 0; i < n; i++)
// 		{
//             power *= remainder;
//         }

//         result += power;
//         dig /= 10;
//     }
//     if (result == num)
//         printf("%d is an Armstrong number.", num);
//     else
//         printf("%d is not an Armstrong number.", num);

// return 0;
// }

#include <stdio.h>

void main()
{
    int num;
    printf("Enter the number");
    scanf("%d", &num);

    int temp = num;
    int sum = 0;

    while (temp > 0)
    {
        int last = temp % 10;

        int cube = last*last*last;

        sum += cube;

        temp = temp / 10;
    }

    if (sum == num)
    {
        printf("it is a armstrong number");
    }
    else
    {
        printf("It is not a armstrong number");
    }
    
    
}
