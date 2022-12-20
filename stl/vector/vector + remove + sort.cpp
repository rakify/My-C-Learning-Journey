
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<endl<<"*** i will take 5 integers as input using code:v.push_back() collect even,";
    cout<<endl<<"and show them. to check vector size i used code:v.size()";
    cout<<endl<<"finally to display the elements i have used,";
    cout<<endl<<"the range based for loop that is code:for(auto i:v)cout<<i;";
    //if user input odd continue otherwise collect them
    cout<<endl;
    cout<<endl<<"** give me 5 integers:"<<endl;
    vector<int>v1,v2,v3;

    int i,input;
    for(i=0; i<5; i++)
    {
        cin>>input;
        v2.push_back(input);
        v3.push_back(input);
        if((input%2)==0)
            v1.push_back(input);
        else
            continue;
    }
    cout<<"even: ";
    //for(i=0;i<v1.size();i++)
    for(auto i:v1)
        cout<<i<<" ";

    cout<<endl;
    cout<<endl<<"**now i will sort the elements in ascending code:sort(v.begin(),v.end())";
    cout<<endl<<"and descending code:sort(v.begin(),v.end(),greater<int>()) as the third argument.";

    sort(v2.begin(),v2.end());
    cout<<endl<<"ascending order: ";
    for(auto i:v2)
        cout<<i<<" ";
    sort(v2.begin(),v2.end(),greater<int>());
    cout<<endl<<"descending order :";
    for(auto i:v2)
        cout<<i<<" ";


            cout<<endl;
            cout<<endl;
            cout<<endl<<"*** there are some methods to remove element/s. lets try with v2: ";
            for(auto i:v2)
                cout<<i<<" ";
        cout<<endl;
            cout<<endl<<"** code:v.pop_back(); deletes the last element"<<endl;
            v2.pop_back();
            for(auto i:v2)
                cout<<i<<" ";

            cout<<endl;
            cout<<endl<<"*** now lets try with v3: ";
            for(auto i:v3)
                cout<<i<<" ";

            cout<<endl<<"** code:v.erase(left,right); deletes a range of elements or a specific one";
                v3.erase(v3.begin()+2);
                cout<<endl<<"** removed 3rd element code:v.erase(v.begin()+2);";
                cout<<endl<<"result: ";
            for(auto i:v3)
                cout<<i<<" ";
                cout<<endl<<"** also can delete range of elements like first 3 elements using both left and right arguments.";
                cout<<endl<<"remember this time we will use the exact number code:v.erase(v.begin(),v.begin()+3); ";
                v3.erase(v3.begin(),v3.begin()+3);
                cout<<endl<<"result: ";
            for(auto i:v3)
                cout<<i<<" ";

                cout<<endl;
                cout<<endl<<"*** v.clear(); empties the vector."<<endl;

                cout<<endl;
                cout<<endl<<"** remove(first,last,val); removes all the elements from first to last with the same value of val"<<endl;
                cout<<endl<<"*** lets exercise this one with v4: ";
                vector <int>v4{20,20,10,20,15};
                for(auto i:v4)
                    cout<<i<<" ";
                cout<<endl<<"** declaring iterator vector code:vector <int>::iterator it;"<<endl;
                vector <int>::iterator it;
                cout<<"declared";
                cout<<endl<<"** collecting the position of elements that has 20 to 'it' code:it=remove(v.begin(),v.end(),20);"<<endl;
                it=remove(v4.begin(),v4.end(),20);
                cout<<"collected";
                cout<<endl<<"** deleting 'it' positions from v4 using code:v.erase(it,v.end());"<<endl;
                v4.erase(it,v4.end());
                cout<<"deleted";
                cout<<endl<<"** final result: ";
                for(auto i:v4)
                    cout<<i<<" ";





}
