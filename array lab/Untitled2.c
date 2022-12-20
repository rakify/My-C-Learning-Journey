#include <stdio.h>
#include <string.h>
int main()
{
    char a[2];
    fgets(a,2,stdin);
    fflush(stdin);
    int i = strlen(a);
    printf("%d\n",i);
    /*if(i<1-1)
        a[i-1]='\0';*/
        for(i=0;a[i]!='\0';i++)
        {
            printf("%d,%d %c",i,a[i],a[i]);
        }
}
