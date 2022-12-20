#include <stdio.h>
int main()
{
    int n,i,neg=0;

    printf("\thow many elements do you want?\n");
    scanf("%d",&n);
    int a[n];

    //taking values
    printf("\tenter %d elements:\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("thats enough!\n\n");

    //checking if negative
    for(i=0;i<=n-1;i++)
    {
        if(a[i]<0)
            neg++;
    }

   //displaying result
    printf("\ttotal negative: %d\n",neg);
}

