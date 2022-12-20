#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum =0, result1=0,result2=0,result3=0,tc,st,et,ct=0;
    scanf("%d",&tc);

    while(tc--)
    {


        scanf("%d%d",&st,&et);


        ct=abs(st-et);

        if(ct==0)
        {
            printf("0\n");

        }

        else
        {


            if(ct/5>=0)
            {

                result1++;
                ct=ct-(result1*5);
            }
            if(ct/2>=0)
            {


                result2++;
                ct=ct-(result2*2);
            }
            if (ct/1>=0)
                result3++;


            sum = result1+result2+result3;
            printf("%d\n",sum);
            sum=0;
            result1=0;
            result2=0;
            result3=0;

        }

    }



}
