#include <stdio.h>
int main()
{
    int a[30],n,i,j,t;
    printf("\thow many elements do you want?\n");
    scanf("%d",&n);

    //taking values from user
    printf("\tenter %d elements\n",n);
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&a[i]);
    }

    //sorting to ascending order
    for(i=0; i<=n-2; i++)
    {
        for(j=i+1; j<=n-1; j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    //displaying the result
    printf("thats enough!\n\n");

    printf("\n\tthe second largest element: %d\n",a[n-2]);

}
