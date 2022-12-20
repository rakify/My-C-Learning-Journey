#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a[5],i,j;
    bool b[5];
    for(i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<=3; i++)
    {
        for(j=1;j<=4;j++)
    {
        if (a[i]==a[j])
        {
            bool b[i]= true;
        }

    }
    }

    for(i=0;i<=4;i++)
    {
        if(b[i]==false)
        {
            printf("%d\n",b[i]);
        }
    }



}
