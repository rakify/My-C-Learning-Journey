#include <stdio.h>
int main()
{
    FILE *x;
    char fname[]="C:\\Users\A.S\Desktop\out.txt";
    char ftype[]="w+";

    x=fopen(fname,ftype);
    if(x==0)
    {
        printf("error");
        return 0;
    }
    fprintf(x,"writes into file");
    return 0;

}
