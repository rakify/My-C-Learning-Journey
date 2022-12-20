#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,key;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>key;
        if((find(v.begin(),v.end(),key))==v.end()) v.push_back(key);
    }

        vector<int>::iterator it;

    for(it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }



}

//input
//5
//2 1 1 3 4
//output
//2 1 3 4
//input
//10
//2 2 3 1 4 -1 4 4 -1 4
//output
//2 3 1 0 -1 4
//after sorting how to make it in previous order
//i did it

