#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;

bool isSubSequence(string s1, string s2)
{
    int m = s1.length(), n = s2.length();
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
        if (s1[j] == s2[i])
            j++;

    return (j == m);
}


int main()
{
    Fast
    int i,j,k,l,tc;
    cin>>tc;
    int t, n, sum=0, count=0;

    for(i=0; i<tc; i++)
    {
        string s, s1, s2;
        cin>>s;
        int count0=0,count1=0, flag=0, ans=s.length();

        for(int j=0; j<s.size(); j++)
        {
            for(int l=0; l<=i; l++)
            {
                if(s[l]=='1')count1++;
                if(s[l]=='0')count0++;
            }
            for(int k=j+1; k<s.size(); k++)
            {
                if(s[k]=='0')count0++;
                if(s[k]=='1')count1++;
            }
            ans=min(ans,min(count0,count1));
        }
        cout<<ans<<endl;
    }
}
