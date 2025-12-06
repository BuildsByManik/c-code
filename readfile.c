#include<stdio.h>
void main(){
    FILE *fp;
    fp=fopen("demor.txt","r");
    if (fp==NULL)
    {
        printf("file not found");
        return;
    }
    
    char data[100];
    // fgets(data,100,fp);
    // printf("%s",data);
    while (fgets(data,100,fp))
    {
        printf("%s",data);
    }
    
    fclose(fp);
}