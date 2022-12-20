#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(t--)
    {
        int l,i;
        cin>>l;
        int a[l+1];
        for(i=0;i<l;i++)
            cin>>a[i];

        for(i=0;i<l;i++)
        {
            if(a[i]==1)
            {
                if((a[i+6]=='/n')||(a[i+1]==0&&a[i+2]==0&&a[i+3]==0&&a[i+4]==0&&a[i+5]==0&&a[i+6]==1))
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
    }
}
