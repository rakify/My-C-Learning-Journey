#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        map <string,int> spam,nospam;//here i declared 2 maps, one for spam count another for nospam, with string as key and int as value.
        int n;

        cin>>n;

        while(n--)
        {
            string a;
            int x;

            cin>>a>>x;

            //now pay attention. this [] is a map operator. we use it to get the map value initialized with the key inside.
            //see, every fucking time i call it, it destroys previous value by default 0. so i am initializing a place for them
            //in the map myself thus it doesnt make me go crazy.
            spam[a];
            nospam[a];
            //now it says "oh no! i have my place so i wont make rakib mad again."

            x?spam[a]++:nospam[a]++;

        }

        int ans=0;

        //now in order to work with the values i am creating 2 map iterator.
        map <string,int>::iterator itr1,itr2;

        for(itr1=spam.begin(),itr2=nospam.begin(); (itr1!=spam.end()||itr2!=nospam.end()); itr1++,itr2++)
            ans+=((*itr1).second > (*itr2).second)?(*itr1).second:(*itr2).second;

        cout<<ans<<endl;//vallagse
    }
}

