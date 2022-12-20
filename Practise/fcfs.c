#include<stdio.h>
#define max 30
void main()
{
    int i,j,n,bt[max],at[max],wt[max],tat[max],temp[max];
    float awt=0, atat=0;
    printf("Enter the number of process:\t");
    scanf("%d",&n);
    printf("Enter the burst time of the process:\t");
    for(i=0; i<n; i++)
        scanf("%d",&bt[i]);
    printf("Enter the arrival time of the process:\t");
    for(i=0; i<n; i++)
        scanf("%d",&at[i]);

    temp[0]=0;
    printf("Process \t BT \t AT \t WT \t TAT \n");
    for(i=0; i<n; i++)
    {
        wt[i]=0;
        tat[i]=0;
        temp[i+1]=temp[i]+bt[i];
        wt[i]=abs(temp[i]-at[i]);
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];    // calculating total waiting time
        atat=atat+tat[i]; // calculating total turn around time
        printf("%d \t %d \t %d \t %d \t %d \n",i+1,bt[i],at[i],wt[i],tat[i]);
    }
    awt=awt/n;            // awt = total waiting time/number of process
    atat=atat/n;         // atat = total turn around time/number of process
    printf("Average Waiting Time = %f\n",awt);
    printf("Average Turn Around Time = %f\n",atat);

}
