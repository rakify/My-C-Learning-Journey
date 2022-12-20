#include <stdio.h>
int swap(int*,int*);
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("before swapping: n1 = %d & n2 = %d\n",n1,n2);
    swap(&n1,&n2);
    printf("after swapping: n1 = %d & n2 = %d\n",n1,n2);

}
int swap(int *n1,int *n2)
{
    int t;
    t=*n1;
    *n1=*n2;
    *n2=t;
}
