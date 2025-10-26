#include <stdio.h>
void main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);

    int temp=n;
    int evenCount=0;
    int oddCount=0;
    
    while (temp>0)
    {
        int last = temp%10;
        if (last % 2 == 0)
        {
            evenCount++;
            temp = temp/10;   
        }
        else
        {
            temp = temp/10;
            oddCount++;

        }   
    }
    printf("In given number odd count is %d and even count is %d", oddCount,evenCount); 
}
