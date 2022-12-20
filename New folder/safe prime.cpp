#include <bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    int i,j;
    if((n>2) && ((n%2)==0))
        return 2;
    else if (n==2 || n==3 || n==5)
        return 1;

    else
    {
        for(i=3; i<=n/2; i+=2)
        {
            if(n%i ==0)
            {
                return 2;
                break;
            }
        }
        return 1;
    }
}
int main()
{
    int n;
    cin>>n;

    if(n<11)
        cout<<"False";
    else if (isprime(n)==1 && isprime((n-1)/2)==1 && isprime((((n-1)/2)-1)/2)==1)
        cout<<"True";
    else
        cout<<"False";


        cout<<isprime(n)<<isprime((n-1)/2)<<isprime((((n-1)/2)-1)/2);
}
