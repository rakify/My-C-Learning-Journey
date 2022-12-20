#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7]={6,13,14,25,33};
    int n = 4;
    int k = 2;
    int j = n;
    while(j>k)
    {
        a[j+1]=a[j];
        j--;
    }

   a[k] = 100;
    n = n+1;

    for(int i=0;i<=n;i++)cout<<a[i]<<" ";
}
