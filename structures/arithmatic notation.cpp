#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int arr[6]={1,2,3,4,5};
    int max = arr[0];
    int loc=0;
    for(int k=0;k<5;k++)
    {
        if(arr[k]>max)
        {
            loc=k;
            max=arr[k];
        }
    }
    cout<<loc<<" "<<max;


}
