#include <stdio.h>
int main()
{
    FILE *x;
    char name[25];
    int age;
    printf("enter your name & age:\n");
    scanf("%s %d",name,&age);

    x = fopen("rakibfprintf.txt","w");
    if(x==NULL)
    {
        printf("unable to create the file");
    }
    else
    {

        fprintf(x,"%s\t%d",name,age);

        printf("data written successfully");

        fclose(x);
    }



    return 0;
}

