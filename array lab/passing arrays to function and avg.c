#include <stdio.h>
int sumarr(int arr[]);
int main()
{
    int arr[]={3,2,3,4};
    float avg;
    avg = sumarr(arr)/4;
    printf("%.2f",avg);

}
int sumarr(int arr[])
{
    int i,sum = 0;
    for(i=0;i<=3;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
