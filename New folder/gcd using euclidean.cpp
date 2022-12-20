#include <stdio.h>
int gcd(int x,int y)
{
    int r;
    while(y!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }
    return x;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));

}
