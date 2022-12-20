#include <stdio.h>
#include <string.h>
int main()
{
    int i,j=0,count;
    char pname[30],rname[30],t;
    gets(pname);
    puts(pname);

   count = strlen(pname);
   //for(i=0;pname[i]!='\0';i++);
   // {
    // count++;
//}
    for(i=count;i>=0;i--)
    {
        rname[j]=pname[i];
        j++;
    }
    for(i=0;i<=count;i++)
    {
        if(rname[i]=='\0')
        {
            t=rname[i];
            rname[i]=rname[i+1];
            rname[i+1]=t;
        }
    }

    for(i=0;i<=count;i++)
    {
        printf("%c",rname[i]);
    }

}
