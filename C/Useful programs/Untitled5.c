#include <stdio.h>
int main()
{
    int tc,sum=0,i,day=1,first;
    scanf("%d",&tc);
    int a[tc];
    for(i=0;i<tc;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<tc;i++)
    {

            sum=sum+a[i];
            if(sum<<0)
            {
                printf("-1\n");
            }

            if(((tc/7)>=1)  && sum==0)
            {
                day++;
                first = i;
            }
    }

     printf("%d\n%d",day,first);
}
