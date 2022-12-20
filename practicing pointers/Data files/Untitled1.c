#include <stdio.h>
int main()
{
    int i;
    char name[5][50],id[5][20];
    puts("Enter 5 Names:");
    for(i=0;i<=4;i++)
    {
        fgets(name[i],50,stdin);
    }
    puts("Enter Their ID Accordingly:");
    for(i=0;i<=4;i++)
    {
        fgets(id[i],20,stdin);
    }
    printf("\tID\tName\n\n");
    for(i=0;i<=4;i++)
    {
        for(int j=0;j<=49;j++)
        {
        printf("\t%s\t%s\n",id[i],name[i]);
        }
    }
}
