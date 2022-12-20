//problem is to remove all duplicate items including the original
//i have used erase-remove idiom here.
//The erase–remove idiom is a common C++ technique to eliminate elements that fulfill a certain criterion from a C++ Standard Library container.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,key;
    vector<int>v;
    for(i=0; i<n; i++)
    {
    cin>>key;
    if(find(v.begin(),v.end(),key)!=v.end()) v.erase(remove(v.begin(),v.end(),key),v.end());
    else
    v.push_back(key);
    }
    for(auto x:v)
        cout<<x<<" ";




}

//input
//5
//2 1 1 3 4
//output
//2 3 4
//input
//10
//2 2 3 1 4 -1 4 4 -1 4
//output
//3 1
//i did it

