#include <stdio.h>
int pbv(int x,int y)
{
    int a;
    a=x;
    x=y;
    y=a;
}
int pbr(int *x,int *y)
{
    int a;
    a=*x;
    *x=*y;
    *y=a;
}
int main()
{
    int c=22,b=9;
    printf("before passing c = %d & b = %d\n",c,b);
    pbv(c,b);
    printf("after passing by value c = %d & b = %d\n",c,b);
    pbr(&c,&b);
    printf("after passing by reference c = %d & b = %d",c,b);


}
