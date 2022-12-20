//https://leetcode.com/problems/valid-parentheses/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(string s)
{
    stack<char>st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else
        {
            if(!st.empty())
            {
                if(s[i]==')'&&st.top()=='(' || s[i]=='}'&&st.top()=='{'||s[i]==']'&&st.top()=='[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if(st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cin>>s;
    cout<<solve(s);

}
