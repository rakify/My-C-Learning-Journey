#include <stdio.h>
//*reversing int array elements\\*
int main()
{
    int a[10],n,i;
    printf("\t how many elements do you want?\n");
    scanf("%d",&n);
    printf("\tenter %d elements:\n",n);
    for(i=0;i<=n-1;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("before reversing:\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nafter reversing:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
