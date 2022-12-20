#include <stdio.h>
int main()
{
    int i,j,temp, a[8]= {5,123,9,1,15,32,23,21};

    for(i=0; i<=6; i++)
    {
        for(j=i+1; j<=7; j++)
        {
            if(a[i]>a[j])
            {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
            }
    }
    for(i=0;i<=7;i++)
    {
        printf("%d ",a[i]);
    }
}
