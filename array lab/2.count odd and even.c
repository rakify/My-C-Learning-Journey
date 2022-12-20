#include <stdio.h>
int main()
{
    int n,i,odd=0,even=0;

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

    //checking odd or even
    for(i=0;i<=n-1;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }

   //displaying result
    printf("\ttotal odd: %d\n\ttotal even: %d\n",odd,even);
}
