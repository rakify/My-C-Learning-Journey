#include <stdio.h>
#include <stdlib.h>

int main()
{
    int std,sub,marks[10][10][5],i,j,k;
    char id[10][12],ccode[10][12],ctitle[10][50],name[10][50];
    float chour[10];

    FILE *fp1;
    fp1=fopen("data.txt","r");
    if(!fp1)
    {
        printf("File can not be opened");
        exit(0);
    }

    fscanf(fp1,"%d,%d",&std,&sub);
    for(i=1; i<=sub; i++)
    {
        fscanf(fp1,"%[^,],%[^,],%f",ccode[i],ctitle[i],&chour[i]);

        printf("%s %s %f\n",ccode[i],ctitle[i],chour[i]);

    }
    for(i=1; i<=std; i++)//i for student
    {

        fscanf(fp1,"%[^,],%[^\n]",id[i],name[i]);
        printf("%s %s\n",id[i],name[i]);
        for(j=1; j<=sub; j++)//j for subject per student
        {
            if(j!=1)
                printf("\n");
            for(k=1; k<=4; k++)//k for number per subject per student
            {

                fscanf(fp1,"%d,",&marks[i][j][k]);
                printf("%d",marks[i][j][k]);
                if(k!=4)
                    printf(",");
            }


        }
    }







    fclose(fp1);

}

