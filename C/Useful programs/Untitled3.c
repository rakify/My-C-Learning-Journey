#include <stdio.h>
int main()
{
    int i1=0,i2=0,po1=0,po2=0;

    int f1,f2;
    scanf("%d %d",&f1,&f2);
    getchar();

    while(i1<=f1)
    {
        i1++;
        i1+=2;
    }
    while(i2<=f2)
    {
        i2+=2;
        i2++;
    }
    if(i1==f1 && i2==f2)
    po1=1;

    i1=0;i2=0;
    while(i1<=f1)
    {
        i1+=2;
        i1++;
    }
    while(i2<=f2)
    {
        i2++;
        i2+=2;
    }
    if(i1==f1 && i2==f2)
    po2=1;



    printf("%d\n",po1+po2);


}
