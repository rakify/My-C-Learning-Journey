#include<iostream>
#include<dos.h>

#include<conio.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<time.h>

void bmi(float b_w,float he)
{
   double c;

   c=(b_w/(he*he/10000));
   cout<<setw(6)<<"\n\n\t\tYour Body Mass Index No.(BMI) is -> "<<setprecision(1)<<c;
   {
     if (c<19)
       {
	 textcolor(RED+BLINK);
	 gotoxy(25,30);
	 cprintf("\n\n\t\t You Are 'UNDERWEIGHT'!\n");
	 cout<<"\n\n\t\tEat lots Butter & Ghee to Stay Healthy. ";
	 textcolor(BLUE);
       }

     else if(c>=19 && c<25)
       {
	 textcolor(RED+BLINK);
	 gotoxy(25,30);
	 cprintf("\n\n\t You Are In 'Perfect Shape'!");

       }

     else if(c>=25 && c<30)
       {
	 textcolor(RED+BLINK);
	 gotoxy(25,30);
	 cprintf("\n\n\t     You Are 'OVERWEIGHT'!");
	 cout<<"\n\n\tExercise Reguarly to Maintain your Bodyweight.";

       }

     else if(c>=30)
       {
	 textcolor(RED+BLINK);
	 gotoxy(25,30);
	 cprintf("\n\n\t   You Are 'A VICTIM OF OBESITY'!!");
	 cout<<"\n\n  Exercise Regularly & Cut down on your Daily Intake to live a Longer Life";

       }
      else
      cout<<"\n\n\t\tEnter appropriate values!";
   }
}

void main()
{
 textbackground(BLUE);
 textcolor(YELLOW);
 clrscr();
 int date,month,year,date1,month1,year1,y,z;
 long int x;
 float he,b_w;
 char strt[25],strb[10];
 char string[20];

 cout<<"\n\n**********************PROGRAM THAT CALCULATES YOUR AGE*********************!";
 cout<<"\n\nPlz Enter your name -> ";
 gets(string);
 cout<<"\nEnter your Body Weight(in Kgs) -> ";
 cin>>b_w;
 cout<<"\nEnter your Height(in Centimetres: Eg: 170 ) -> ";
 cin>>he;


 time_t t;

   time(&t);
  strcpy(strt,ctime(&t));




 /*cout<<"\nEnter Today's Date (DD-MM-YYYY):-  ";
 gets(strt); */

 date=(10*((int)strt[8]-48)) + ((int)strt[9]-48);
 month=2;
 year= (1000*((int)strt[20]-48)) + (100*((int)strt[21]-48)) + (10*((int)strt[22]-48)) + ((int)strt[23]-48);

 cout<<"\nEnter your Date of Birth (DD-MM-YYYY):-  ";
 gets(strb);
 date1=(10*((int)strb[0]-48)) + ((int)strb[1]-48);
 month1=(10*((int)strb[3]-48)) + ((int)strb[4]-48);
 year1= (1000*((int)strb[6]-48)) + (100*((int)strb[7]-48)) + (10*((int)strb[8]-48)) + ((int)strb[9]-48);




 cout<<"\n\n";
 x=((year)-(year1+1));
{
 if ((month>=month1) && (date>=date1))
  {
  {
    y=(month-month1);
    x=x+1;
    z=(date-date1);
  }
  cout<<string<<"  you are "<<x<<" years "<<y<<" months and "<<z<<" days old ";
  }
 else if (((month>month1) && (date<date1)) && ((month==5)  || (month==7) || (month==10)  || (month==12)))
  {
  {
    y=((month-month1)-1);
    x=x+1;
    z=((30-date1)+date);
  }
   cout<<string<<"  you are "<<x<<" years "<<y<<" months and "<<z<<" days old ";
  }
   else if (((month>month1) && (date<date1)) && ((month==4) || (month==1)|| (month==2) || (month==6) || (month==8)|| (month==9) || (month==11)))
   {
   {
    y=((month-month1)-1);
    x=x+1;
    z=((31-date1)+date);
  }
   cout<<string<<"  you are "<<x<<" years "<<y<<" months and "<<z<<" days old ";
   }

    else if ((month>month1) && (date<date1) && (month==3))
   {
   {
    y=((month-month1)-1);
    x=x+1;
    z=((28-date1)+date);
  }
   cout<<string<<"  you are "<<x<<" years "<<y<<" months and "<<z<<" days old ";
  }

   else if (((month==month1) && (date<date1)) && ((month==1) || (month==2) || (month==4)  || (month==6) || (month==8) || (month==9) || (month==11)))
   {
   {
     y=11;
     z=((31-date1)+date);
   }
    cout<<string<<"  you are "<<x<<" years "<<y<<" months and "<<z<<" days old ";
   }

     else if (((month==month1) && (date<date1)) && ((month==5) || (month==7) || (month==10)  || (month==12)))
   {
   {
     z=((30-date1)+date);
   }
    cout<<string<<"  you are "<<x<<" years 11 months and "<<z<<" days old ";
   }

    else if (month==month1 && date<date1 && month==3)
   {
   {
     z=((28-date1)+date);
   }
    cout<<string<<"  you are "<<x<<" years 11 months and "<<z<<" days old ";
    }

    else if (((month<month1) && (date>date1)) && ((month==1) || (month==3) || (month==5)  || (month==7) || (month==8) || (month==10) || (month==12)))
   {
   {
     y=((12-month1)+month);
     z=date-date1;
   }
    cout<<string<<"  you are "<<x<<" years "<<y<<" months and "<<z<<" days old ";
   }

     else if (((month<month1) && (date>date1)) && ((month==4) || (month==6) || (month==9)  || (month==11)))
   {
   {
     y=((12-month1)+month);
     z=date-date1;
   }
     cout<<string<<"  you are "<<x<<" years "<<y<<" months and "<<z<<" days old ";
    }

    else if ((month<month1) && (date>date1) && (month==2))
   {
   {
     y=((12-month1)+month);
     z=date-date1
     ;
   }
     cout<<string<<"  you are "<<x<<" years "<<y<<" months and "<<z<<" days old ";
   }

    else if (((month<month1) && (date<date1)) && ((month==1) || (month==2) || (month==4)  || (month==6) || (month==8) || (month==9) || (month==11)))
   {
   {
     y=((12-month1)+month-1);
     z=((31-date1)+date);
   }
     cout<<string<<"  you are "<<x<<" years "<<y<<" months and "<<z<<" days old ";
    }

     else if (((month<month1) && (date<date1)) && ((month==5) || (month==7) || (month==10)  || (month==12)))
   {
   {
     y=((12-month1)+month-1);
     z=((30-date1)+date);
   }
     cout<<string<<"  you are "<<x<<" years "<<y<<" months and "<<z<<" days old ";
    }
    else if ((month<month1) && (date<date1) && (month==3))
   {
   {
     y=((12-month1)+month-1);
     z=((28-date1)+date);
   }
    cout<<string<<"  you are "<<x<<" years "<<y<<" months and "<<z<<" days old ";
    }

   else
    cout<<"\n\nEnter Appropriate Values";
  }

  {

  if(((month1==3) && (date1>=21) && (date<=31)) || ((month1==4) && (date1<=19)))

   {
   cout<<"\n\n\t\t\tYour Zodiac sign is ARIES";
   cout<<"\n\n 2012 would be a good year overall. You will experience a rise in financial luck and inflows";
   cout<<"\n\n\t\t Best of luck for Your Future ";
  }

  else if(((month1==4) && (date1>=20) && (date1<=30)) || ((month1==5) && (date1<=20)))
   {
   cout<<"\n\n\t\tYour Zodiac sign is TAURUS";
   cout<<"\n\n A very eventful year. Career would be on a high growth trajectory and bring in major progress and achievements.";
   cout<<"\n\n\t\t Best of luck for Your Future ";
  }

   else if(((month1==5) && (date1>=21) && (date1<=31)) || ((month1==6) && (date1<=20)))
   {
   cout<<"\n\n\t\tYour Zodiac sign is GEMINI";
   cout<<"\n\nA very positive year. Income & professional growth would be immense. You will find the ability to make some very profitable deals now.";
   cout<<"\n\n\t\t Best of luck for Your Future ";
  }

    else if(((month1==6) && (date1>=21) && (date1<=30)) || ((month1==7) && (date1<=22)))
   {
   cout<<"\n\n\t\tYour Zodiac sign is CANCER";
   cout<<"\n\nA very eventful year, although negative thoughts and unnecessary pessimism could spoil your spirit and bring in unnecessary tension.";
   cout<<"\n\n\t\t Best of luck for Your Future ";
  }

   else if(((month1==7) && (date1>=23) && (date1<=31)) || ((month1==8) && (date1<=22)))
   {
   cout<<"\n\n\t\tYour Zodiac sign is LEO";
   cout<<"\n\nAn exceptional year again. You will see a rise in status and expansion in career this year too. Luck will favor you throughout.";
   cout<<"\n\n\t\t Best of luck for Your Future ";
  }

   else if(((month1==8) && (date1>=23) && (date1<=31)) || ((month1==9) && (date1<=22)))
   {
   cout<<"\n\n\t\tYour Zodiac sign is VIRGO";
   cout<<"\n\nA brilliant & positive year, where you will make things happen on your own strength, rather than seeking support of others.";
   cout<<"\n\n\t\t Best of luck for Your Future ";
  }

   else if(((month1==9) && (date1>=23) && (date1<=30)) || ((month1==10) && (date1<=22)))
   {
   cout<<"\n\n\t\tYour Zodiac sign is LIBRA";
   cout<<"\n\nA powerful phase will be in operation this month. You will find your role as defined by nature will change and all efforts and activities carried out by you will assume higher importance and effectiveness.";
   cout<<"\n\n\t\t Best of luck for Your Future ";
  }

   else if(((month1==10) && (date1>=23) && (date1<=31)) || ((month1==11) && (date1<=21)))
   {
   cout<<"\n\n\t\tYour Zodiac sign is SCORPIO";
   cout<<"\n\nPositive period would continue, although you need to be careful that throwing good money after bad money is not a great idea.";
   cout<<"\n\n\t\t Best of luck for Your Future ";
  }

   else if(((month1==11) && (date1>=22) && (date1<=31)) || ((month1==12) && (date1<=21)))
   {
   cout<<"\n\n\t\tYour Zodiac sign is SAGITTARIUS";
   cout<<"\n\n2012 brings in promise and progress. New ideas and cerebral approach to matters will bring in much progress this year. You will be at your creative best till May 2012 and thereafter dynamic activity will take you along.";
   cout<<"\n\n\t\t Best of luck for Your Future ";
  }

   else if(((month1==12) && (date1>=22) && (date1<=30)) || ((month1==1) && (date1<=19)))
   {
   cout<<"\n\n\t\tYour Zodiac sign is CAPRICORN";
   cout<<"\n\nA very positive year for you. You would be at your creative best and luck related peak in most of the works you get into.";
   cout<<"\n\n\t\t Best of luck for Your Future ";
  }

   else if(((month1==1) && (date1>=20) && (date1<=31)) || ((month1==2) && (date1<=18)))
   {
   cout<<"\n\n\t\tYour Zodiac sign is AQUARIUS";
   cout<<"\n\nA much better year in comparison to 2010 & 2011. You will feel a surge in your luck, productivity and general sense of positive outlook.";
   cout<<"\n\n\t\t Best of luck for Your Future ";
  }

   else if(((month1==2) && (date1>=19) && (date1<=29)) || ((month1==3) && (date1<=20)))
   {
   cout<<"\n\n\t\tYour Zodiac sign is PISCES";
   cout<<"\n\nSome amount of struggle and hurdles could come about in life this year. You will have a positive and gainful period till May 2012.";
   cout<<"\n\n\t\t Best of luck for Your Future ";
  }

  else
    cout<<"\n\nEnter Appropriate Values \nThe month or Date assigned by You are not in accordance to the English Calender.";

  }
    delay(2000);
    cout<<"\n\n";

    bmi(b_w,he);

    getch();
}

