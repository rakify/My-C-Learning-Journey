#include <stdio.h>
int fact(int n);
int main()
{
    int n,result;
    printf("\tenter the number:\n");
    scanf("%d",&n);
    result = fact(n);
    printf("I got you!\n\n\t%d! = %d\n",n,result);


}
int fact(int n)
{
    int f;
    if(n==1)

        return 1;

    else
    f = n*fact(n-1);
    return f;
}
