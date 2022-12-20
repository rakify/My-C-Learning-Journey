#include <stdio.h>
#include <stdlib.h>

char* lg_calc(int a);
float gp_calc(int a);
int main()
{
    int std,sub,marks[10][10][5],i,j,k;
    char id[10][12],ccode[10][12],ctitle[10][50],name[10][50];
    float chour[10];
    int total=0;
    float total_score=0.0,total_credit=0.0,cgpa;

    FILE *fp1;
    FILE *fp2;
    fp1=fopen("data.txt","r");
    fp2=fopen("data2.txt","w");
    if(!fp1)
    {
        printf("No such file in the directory!\n");
        exit(1);
    }
    if(!fp2)
    {
        printf("File could not be written!\n");
        exit(1);
    }

    fscanf(fp1,"%d,%d",&std,&sub);
    fprintf(fp2,"Total Student = %d\nTotal Subject = %d\n\n",std,sub);
    for(i=1; i<=sub; i++)
    {
        fscanf(fp1,"%[^,],%[^,],%f",ccode[i],ctitle[i],&chour[i]);
        total_credit+=chour[i];
    }
    for(i=1; i<=std; i++)//i for student
    {

        fscanf(fp1,"%[^,],%[^\n]",id[i],name[i]);
        fprintf(fp2,"%s\t%s\n",id[i],name[i]);


        for(j=1; j<=sub; j++)//j for subject per student
        {
            fprintf(fp2,"%s\t",ccode[j]);


            for(k=1; k<=4; k++)//k for number per subject per student
            {

                fscanf(fp1,"%d,",&marks[i][j][k]);
                fprintf(fp2,"%d\t",marks[i][j][k]);
                total+=marks[i][j][k];
                }
            fprintf(fp2,"Total = %d\t%s\t%.2f",total,lg_calc(total),gp_calc(total));

            //calculating cgpa
            total_score+=(gp_calc(total)*chour[j]);
            cgpa=total_score/total_credit;

            total=0;
        //keeping it 0 for further calculations
        }
        total_score=0;
        //keeping it 0 for further calculations
            fprintf(fp2,"\nCGPA = %.2f\n",cgpa);



    }

    fclose(fp1);
    fclose(fp2);

    printf("\t\tHola Rakib!\n\n\tWriting to the file.......\n\n\t\tFelicidades!\n\n");

}


char* lg_calc(int a)
{
    if(a>=80 && a<=100)

        return "A+";

    else if(a>=75 && a<=79)

        return "A";

    else if(a>=70 && a<=74)

        return "A-";

    else if(a>=65 && a<=69)

        return "B+";

    else if(a>=60 && a<=64)

        return "B";

    else if(a>=55 && a<=59)

        return "B-";

    else if(a>=50 && a<=54)

        return "C+";

    else if(a>=45 && a<=49)

        return "C";

    else if (a>=40 && a<=44)

        return "D";

    else if(a>=0 && a<=39)

        return "F";

}
float gp_calc(int a)
{
    if(a>=80 && a<=100)

        return 4.00;

    else if(a>=75 && a<=79)

        return 3.75;

    else if(a>=70 && a<=74)

        return 3.50;

    else if(a>=65 && a<=69)

        return 3.25;

    else if(a>=60 && a<=64)

        return 3.00;

    else if(a>=55 && a<=59)

        return 2.75;

    else if(a>=50 && a<=54)

        return 2.50;

    else if(a>=45 && a<=49)

        return 2.25;

    else if (a>=40 && a<=44)

        return 2.00;


    else if(a>=0 && a<=39)

        return 0.00;
}
