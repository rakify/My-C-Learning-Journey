#include<stdio.h>
int main()
{
    int std,sub,i,j,k,marks[10][10][5],total[10][10];
    char id[10][12],name[10][50],ccode[10][12],ctitle[10][50],lg[10][10][4];
    float chour[10],gp[10][10]/*grade point*/ ,cgpa[10];
    FILE *fp1,*fp2;
    fp1=fopen("data.txt","r");
    fp2=fopen("output.txt","w");
    if(fp1==NULL || fp2==NULL)
    {
        printf("\n File cannnot be opened\n");
        return 0;
    }
    fscanf(fp1,"%d,%d",&std,&sub);
     printf("Total Student = %d\nTotal Subject = %d\n\n",std,sub);
    for(i=1;i<=sub;i++)
    {
        fscanf(fp1,"%[^,],%[^,],%f",ccode[i],ctitle[i],&chour[i]);
        printf("%s %s %f",ccode[i],ctitle[i],chour[i]);
    }
    for(i=1;i<=std;i++)
    {
        fscanf(fp1,"%[^,],%[^\n]",&id[i],&name[i]);
        printf("%s %s",id[i],name[i]);
        for(j=1;j<=sub;j++)
        {
            fscanf(fp1,"%d,%d,%d,%d",&marks[i][j][1],&marks[i][j][2],&marks[i][j][3],&marks[i][j][4]);
            printf("%s\t\t%d\t%d\t%d\t%d",ccode[i],marks[i][j][1],marks[i][j][2],marks[i][j][3],marks[i][j][4]);

total[i][j]=marks[i][j][1]+marks[i][j][2]+marks[i][j][3];
            printf("\ttotal=%d\n",total[i][j]);

        }

    }
}

