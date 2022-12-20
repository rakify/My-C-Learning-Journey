#include <stdio.h>
int fib(int pre,int cur,int n);
int main()
{
    int pre=0,cur=1,n;
    printf("\thow many numbers do you want in your fibonacci?\n");
    scanf("%d",&n);
    printf("\nHere you go!\n\n\t%d %d ",pre,cur);
    fib(pre,cur,n);

}

int fib(int pre,int cur, int n)
{
    int temp;
    if(n==2)
        exit(0);

    temp=cur;
    cur=pre+cur;
    pre=temp;

    printf("%d ",cur);

    fib(pre,cur,n-1);
}

