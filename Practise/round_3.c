#include<stdio.h>
int main()
{

    int i, j, k, n, so, tq, sob, sum, swt, stat, tata, temp, count;
    int bt[10], bth[10], wt[10], tat[10];
    float awt=0.0, atat=0.0;
    char new;

    // n = number of process
    // so = (burst time holder/time quantum)+1
    // tq = time quantum
    // awt =average waiting time
    // new = hold the value of start command
    // sob = gantt chart size from so
    // swt = summation of waiting time              l
    // bt[] = burst time
    // wt[] = waiting time
    // atat = average turn around time
    // gcps = gantt chart process sequence
    // stat = summation of turn around time
    // tata = accumulator of turn around time
    // temp = time quantum holder
    // count = counter
    // bth[] = burst time holder
    // tat[] = turn around time holder



    printf("\n\n\n\n   To start round robin scheduling press any key: ");

    k = 0;
    new = getche();
    system("cls");

    while(k < 7)
    {

        j = 0;
        sob = 0;
        count = 0;
        sum = 0;
        swt = 0;
        stat = 0;
        tata = 0;

        printf("\n\n\n\t\t\t      ROUND-ROBIN SCHEDULING");
        printf("\n\t\t\t      ======================");
        printf("\n\n\n\n\n   Enter number of processes: ");
        scanf("%d", &n);
        printf("\n");

        for(i = 0; i < n; i++)
        {

            printf("\n   Enter burst time for Process P%d: ", i+1);
            scanf("%d", &bt[i]);
            bth[i] = bt[i];
        }

        printf("\n\n   Enter time quantum: ");
        scanf("%d", &tq);
        system("cls");
        printf("\n\n\n\t\t\t      ROUND-ROBIN SCHEDULING");
        printf("\n\t\t\t      ======================");
        printf("\n\n\n\n\n   Time quantum: %d", tq);

        for(i = 0; i < n; i++)
        {

            if(bth[i] % tq == 0)
            {

                so = bth[i] / tq;
            }
            else
            {
                so = (bth[i] / tq) +1;
            }
            sob = sob + so;
        }

        int gc[sob], gcps[sob];

        while(1)
        {

            for(i = 0,count = 0; i < n; i++)
            {

                temp = tq;
                if(bth[i] == 0)
                {

                    count++;
                    continue;
                }

                if(bth[i] > tq)
                {
                    gc[j] = tq;
                    gcps[j] = i+1;
                    j++;
                    bth[i] = bth[i] - tq;
                }

                else if(bth[i] >= 0)
                {

                    if(bth[i] == tq)
                    {
                        gc[j] = tq;
                        gcps[j] = i+1;
                        j++;
                    }
                    else
                    {
                        gc[j] = bth[i];
                        gcps[j] = i+1;
                        j++;
                    }
                    temp = bth[i];
                    bth[i] = 0;
                }

                tata = tata + temp;
                tat[i ]= tata;
            }

            if(n==count)
            {

                break;
            }
        }

        for(i = 0; i < n; i++)
        {

            wt[i] = tat[i] - bt[i];
            swt = swt + wt[i];
            stat = stat + tat[i];
        }

        awt = (float)swt/n;
        atat = (float)stat/n;

        printf("\n\n   Process   Burst time   Waiting time   Turn around time\n");
        printf("   -------   ----------   ------------   ----------------\n");

        for(i = 0; i < n; i++)
        {

            printf("\n\n      P%d\t %d\t       %d \t        %d", i+1, bt[i], wt[i], tat[i]);
        }

        printf("\n\n\n\n   Gantt Chart:\n");
        printf("   ------------\n\n");
        for(j = 0; j < sob; j++)
        {

            printf("\tP%d", gcps[j]);
        }
        printf("\n   0");
        for(j = 0; j < sob; j++)
        {

            sum = sum + gc[j];
            if(j == 0)
            {
                printf("        %d", sum);
            }
            else
            {
                printf("\t    %d", sum);
            }
        }
        printf("\n\n\n\n   Average waiting time: %.2f \n\n   Average turn around time: %.2f",awt,atat);
        printf("\n\n\n\n   To start again press S and to exit press any key: ");

        new = getche();
        system("cls");

        if(new == 'S'|| new == 's')
        {
            k++;
        }
        else
        {
            printf("\n\n\n   Program was terminated successfully\n\n   Thank you\n\n\n");
            break;
        }

    }

}
