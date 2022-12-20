#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int i,tc;
    cin>>tc;
    while(tc--)
    {
        ll l,r,a, temp, ans=0, ans1=0, ans2=0, ans3=0, ans4=0;
        cin>>l>>r>>a;
        if(l==r)ans=l/a+l%a;
        else if(a>=l && a<=r){
            temp = r/a;
            ans3 = (a*temp -1)/a + (a*temp -1)%a;
        }

        else
        {
            ans1 = (r-1)/a + (r-1) % a;
            ans2 = r/a + r%a;
        }
        cout<<max(ans,max(ans3,max(ans1,ans2)))<<endl;
    }

}
