#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int val,key;
    map<int,int>m;
    for(val=1;val<n;val++)
    {
        cin>>key;
        m[key] = val;
    }

        map<int,int>::iterator it,it1;

        map<int,int>m1;

    for(it=m.begin();it!=m.end();it++)
    {
        val=(*it).first;
        key=(*it).second;
        m1[key]=val;
    }
    for(it1=m1.begin();it1!=m1.end();it1++)
    {
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
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

