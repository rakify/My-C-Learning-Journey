#include <stdio.h>
int main()
{
    FILE *x;
    char ch;

    x = fopen("rakibfprintf.txt","r");
    if(x==NULL)
    {
        printf("unable to create the file");
    }
    else
    {

        while(!feof(x))
        {
            ch = fgetc(x);
            putchar(ch);
        }

        printf("\ndata read successfully");

        fclose(x);
    }



    return 0;
}


