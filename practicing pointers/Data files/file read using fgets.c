#include <stdio.h>
int main()
{
    FILE *x;
    char data[100];

    x = fopen("fgets.txt","r");
    if(x==NULL)
    {
        printf("unable to create the file");
    }
    else
    {
        while(!feof(x))
        {

            fgets(data,100,x);
            printf("%s",data);
        }
        fclose(x);
    }


    return 0;
}



