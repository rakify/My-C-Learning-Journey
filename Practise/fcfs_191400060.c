#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of the process\n");
    scanf("%d",&n);
    int AT[n],BT[n],ST[n],ET[n],WT[n];
    printf("Enter Arrival time and Burst time of the process\n");
    printf("AT\tBT\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&AT[i],&BT[i]);
    }

    // Logic for calculating start time, end time, waiting time
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            ST[i] = AT[i];
            ET[i] = ST[i]+BT[i];
            WT[i]=AT[i];

        }
        else
        {
            ST[i]=ST[i-1]+BT[i-1];
            ET[i]=ST[i]+BT[i];
            WT[i]=ST[i]-AT[i];
        }
    }

    // printing of outputs

    printf("Process | Start Time | End Time | Waiting Time\n");
    for(int i=0; i<n; i++)
    {
        printf("%d              %d         %d          %d\n",i+1,ST[i],ET[i],WT[i]);
    }
    return 0;
}
