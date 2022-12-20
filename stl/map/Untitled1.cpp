#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i;
    cin>>n;
    string key;
    ll val;
    map<string,ll>m;
    map<string,ll>m1;

    for(i=0;i<n;i++)
    {
        cin>>key>>val;
        m[key]+=val;
        m1[key]++;
    }

    map<string,ll>::iterator it;
    ll highval = m.begin()->second;

    for(it=m.begin();it!=m.end();it++)
    {
        highval = max(highval,(*it).second);
    }


    for(it=m1.begin();it!=m1.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }


}
