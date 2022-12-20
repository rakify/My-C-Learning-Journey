#include <stdio.h>
int main()
{
    FILE *x;
    char name[25];
    int age;

    x = fopen("rakibfprintf.txt","r");
    if(x==NULL)
    {
        printf("unable to create the file");
    }
    else
    {

        fscanf(x,"%s %d",name,&age);
        printf("name: %s\nage:%d",name,age);
        fclose(x);
    }



    return 0;
}



