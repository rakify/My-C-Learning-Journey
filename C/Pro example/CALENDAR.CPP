#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
 long int NY,NM,Y,M;
 long int D,i,DAYS,C,DY;
 char ERA[3];
 ST :
 system("cls");
 Y=0;M=1;D=6;
 printf("\n\t\t\t\tCWIZZ CALENDAR ");
 printf("\n\t\t\t    BY : BIPIN RAJALINGAM S ");
 printf("\n\t\t\t\twww.cwizz.info");
 printf("\n\nYEAR : ");
 scanf("%ld",&NY);
 DY=NY;
 if(NY<0)
    goto ST;
 MONTH:
 printf("MONTH : ");
 scanf("%ld",&NM);
 if(NM<=0 || NM>=13)
   {
    printf("INVALID MONTH\n");
    goto MONTH;
   }
 E:
 printf("ERA BC/AD : ");
 scanf("%s",ERA);
 if(!strcmpi(ERA,"AD") || NY==0)
   {
    while(NY!=Y)
	 {
	  if(((Y%4==0)&&(Y%100!=0))||(Y%400==0))
	     D+=2;
	  else
	     D+=1;
	  Y++;
	 }
   }
 else if(!strcmpi(ERA,"BC"))
   {
    while(NY!=Y)
	 {
	  if(((NY%4==0)&&(NY%100!=0))||(NY%400==0))
	     D-=2;
	  else
	     D-=1;
	  NY--;
	 }
   }
 else
    goto E;
 while(NM!=M)
      {
       if(M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12)
	  D+=3;
       else if(M==4 || M==6 || M==9 || M==11)
	  D+=2;
       else if(((DY%4==0)&&(DY%100!=0))||(DY%400==0))
	  D+=1;
       M++;
      }
 printf("\n\n\t\t\t SUN MON TUE WED THR FRI SAT\n\n");
 if(M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12)
    DAYS=31;
 else if(M==4 || M==6 || M==9 || M==11)
    DAYS=30;
 else if(((DY%4==0)&&(DY%100!=0))||(DY%400==0))
    DAYS=29;
 else
    DAYS=28;
 printf("\t\t\t");
 while(D<0)
       D+=7;
 D%=7;
 for(i=1;i<=D;i++)
    {
     printf("    ");
    }
 for(i=1;i<=DAYS;i++)
    {
     D++;
     cout.width(4);
     cout<<i;
     if(D==7)
       {
	printf("\n\t\t\t");
	D=0;
       }
    }
 printf("\n\nDO U WANT ANOTHER CALENDAR ????(Y/N)");
 CH :
 C=getch();
 if(C=='Y' || C=='y')
    goto ST;
 else if(C=='N' || C=='n')
    goto END;
 else
    goto CH;
 END :
 printf("\n\nTHANKS FOR USING CWIZZ CALENDAR :)");
 getch();
}
