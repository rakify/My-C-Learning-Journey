#include <stdio.h>
/*question is to get elements from user
and get position to insert
and finally insert it.*/
int main()
{
    int a[100],n,p,e,i;
    printf("\thow many elements do you want? (max100)\n");
    scanf("%d",&n);
    printf("\tenter %d elements:\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\twhich position do you want to enter your element?\n");
    scanf("%d",&p);
    if(p>n)
    {
        printf("\tERROR!\nyour position doesnt exist.\n");
        exit(0);
    }
    printf("\tenter the element:\n");
    scanf("%d",&e);
    printf("Here you go!\n");

    for(i=n;i>p;i--)
    {

        a[i]=a[i-1];


    }
    a[p]=e;

    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }

}
