//at = Arrival Time
//bt = Burst Time
//rt = Response Time
//time_s = Time slices
#include<stdio.h>
int main()
{
    int at=0,bt[20],rt[20],temp[20], c,j,n,time,r,flag=0,time_s,ltt,i,wt=0;
    printf("Enter how many process (Max 20): ");
    scanf("%d",&n);
    r=n;

    for(c=0; c<n; c++)  // Taking inputs from the user
    {
        printf("Enter burst time for process #%d: ",c+1);
        scanf("%d",&bt[c]);
        rt[c]=bt[c];
        temp[c]=bt[c];
        printf("\n");
    }
    printf("Enter time slice: ");
    scanf("%d",&time_s);

    //Displaying result
    printf("\n\n\tProcess\tTurnAround Time\tWaiting Time\n\n");

    for(time=0,c=0; r!=0;)
    {
        if(rt[c]<=time_s && rt[c]>0)  // here rt[] have the same values of burst time S
        {
            time=time+rt[c];
            rt[c]=0;
            flag=1;
        }
        else if (rt[c]>0)
        {
            rt[c]=rt[c]-time_s;
            time=time+time_s;
        }
        if(rt[c]==0 && flag==1)
        {
            wt=0;
            wt = time-at-bt[c];
            r--;
            printf("\t%d        %d                    %d\n",(c+1),(time-at),wt);
            ltt=time-at;
            flag=0;
        }
        if( c == n-1)
            c=0;
        else if(at<=time)
            c++;
        else
            c=0;
    }
    j=0;
    printf("\n\n\n");
    printf("Gantt Chart ");
    printf("\n\n\n");
    printf("\t");
    for (int i=at; i<=time; i++)
    {
        printf("--");


    }
    printf("--");
    printf("\n");
    printf("\t");


    for(i=at; i<time;)
    {
        if(bt[j]>=time_s)
        {
            printf("P%d    |\t",j+1);
            i+=time_s;
            bt[j]=bt[j]-time_s;
        }
        else if(bt[j]>0)
        {
            printf("P%d |\t",j+1);
            i+=bt[j];
            bt[j]=0;
        }
        j++;
        if(j>=n)
        {
            j=0;
        }
    }
    printf("\n");

    j=0;
    printf("\t");
    for (int i=at; i<=time; i++)
    {
        printf("--");

    }
    printf("--");
    printf("\n");
    printf("\t ");
    for(i=at; i<time;)
    {

        if(temp[j]>=time_s)
        {

            printf("    ");
            printf(" %d\t",i+time_s);
            i+=time_s;
            temp[j]=temp[j]-time_s;

        }

        else if(temp[j]>0)
        {
            printf("   ");
            printf("%d\t",i+temp[j]);
            i+=temp[j];
            temp[j]=0;

        }
        j++;
        if(j>=n)
        {
            j=0;

        }
    }

}
