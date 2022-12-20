#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();

    char s1[n/2];
    char s2[n/2];
    fgets(s1,(n/2)+1,stdin);
    fgets(s2,(n/2)+1,stdin);



    if((n%2)==0)
    {
        if(strcmp(s1,s2)==0)

            printf("Yes\n");
        else
            printf("No\n");
    }

    else if (n==1)
    {
        fgets(s1,2,stdin);
        printf("No\n");
    }
    else if ((n%2)!=0)
        printf("No\n");




}
