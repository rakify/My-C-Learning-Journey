#include <stdio.h>
int main()
{
    //using integer array..

    static int m1[5],m2[5];
    int i;
    printf("\tEnter 5 elements:\n");
    for(i=0;i<=4;i++){
    scanf("%d",&m1[i]);}

    for(i=0;i<=4; i++ )
    {
        m2[i]=m1[i];
            printf("%d",m2[i]);
    }






}
