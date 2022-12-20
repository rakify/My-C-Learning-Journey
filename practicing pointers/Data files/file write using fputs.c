#include <stdio.h>
#include <string.h>
int main()
{
    FILE *x;
    char data[50];

    x = fopen("rakibfputs.txt","w");
    if(x==NULL)
    {
        printf("unable to create the file");
    }
    else
    {
        printf("\tenter a string:\n");
        gets(data);
        fputs(data,x);
        printf("data written successfully");

        fclose(x);
    }



    return 0;
}
