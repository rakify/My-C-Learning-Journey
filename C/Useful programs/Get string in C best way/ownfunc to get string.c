#include <stdio.h>
#include <string.h>
int input(char a[],int n)
{
    fgets(a,n,stdin);
    fflush(stdin);
    int i = strlen(a);
    if(i<n-1)
        a[i-1]='\0';
}

int main()
{
    char a[2],b[2];
    int i;
    puts("elements for a:");
    input(a,2);
    puts("elements for b:");
    input(b,2);
    puts("printing a....");
    for(i=0; a[i]!='\0'; i++)
    {
        printf("%d,%d %c\n",i,a[i],a[i]);
    }
    puts("printing b....");
    for(i=0; b[i]!='\0'; i++)
    {
        printf("%d,%d %c\n",i,b[i],b[i]);
    }

}
