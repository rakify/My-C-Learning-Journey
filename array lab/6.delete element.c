#include <stdio.h>
/*question is to get elements from user and
get position to delete and finally delete it.*/
int main()
{
    int a[100],n,p,i,t;
    printf("\thow many elements do you want? (max100)\n");
    scanf("%d",&n);
    printf("\tenter %d elements:\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\twhich position do you want to delete?\n");
    scanf("%d",&p);



    if(p>n)
    {
        printf("\tERROR!\nmax position: %d",n-1);
        exit(0);
    }

    printf("Here you go!\n");
    for(i=p;i<=n-2;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<=n-2;i++)
    {
        printf("%d ",a[i]);
    }
}
