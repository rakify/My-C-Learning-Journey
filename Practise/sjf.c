#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many processes: ");
    scanf("%d",&n);

    int p[n],bt[n], temp,i,j, wt[n];

    printf("\nEnter %d burst times:\n",n);
    for(i=0; i<n; i++)
    {
        printf("Process %d: ", i+1);
        scanf("%d", &bt[i]);
        p[i] = i+1;
    }

    //sorting by burst time using bubble sort algorithm
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(bt[i]>bt[j])
            {
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
                temp=p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }


    printf("Process\tBurst Time\n");

    for(i=0; i<n; i++)printf("%d\t%d\n",p[i],bt[i]);

    printf("\n");

    wt[0] = 0;
    for(i=1; i<n; i++)
    {
        wt[i]=0;
        for(j=0; j<i; j++)
            wt[i]+=bt[j];
    }

    printf("Process\tBurst Time\tWaiting Time\n");

    for(i=0; i<n; i++)printf("%d\t%d\t\t%d\n",p[i],bt[i],wt[i]);

}
