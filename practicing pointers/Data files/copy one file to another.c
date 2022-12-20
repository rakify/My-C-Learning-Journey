#include <stdio.h>
int main()
{
    FILE *x1,*x2;
    char ch;

    x1 = fopen("rakib.txt","r");
    x2 = fopen("rakibcopy.txt","w");


        while(!feof(x1))
        {
            ch = fgetc(x1);
            fputc(ch,x2);

        }

        printf("\nfile copied successfully");

        fclose(x1);
        fclose(x2);



    return 0;
}



