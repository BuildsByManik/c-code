#include <stdio.h>
void main(){
       FILE *fp;
    fp = fopen("demo.txt","w");
    fprintf(fp,"Hello World");
    fclose(fp);
}
