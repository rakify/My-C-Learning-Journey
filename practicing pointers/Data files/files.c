#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *x;

    x = fopen("rakib.txt","w");
    if(x==NULL)
    {
        printf("unable to create the file");
    }
    else
    {
        printf("file created successfully!\n");
        fclose(x);
    }
    getch();
    return 0;
}
