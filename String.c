// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    char msg[] = "Hello bro!";
    printf("%s \n", msg);
    printf("%c \n", msg[0]);
    
    msg[0] = 'P';
    printf("%s", msg);

    return 0;
}