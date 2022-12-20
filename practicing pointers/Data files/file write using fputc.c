#include <stdio.h>
#include <string.h>
int main()
{
    FILE *x;
    char data[50] = "hi i want to write something";
    int counter;
    int len=strlen(data);

    x = fopen("rakibfputc.txt","w");
    if(x==NULL)
    {
        printf("unable to create the file");
    }
    else
    {
        for(counter=0;counter<=len;counter++)
        {
            fputc(data[counter],x);
        }
        printf("data written successfully");

        fclose(x);
    }



    return 0;
}
