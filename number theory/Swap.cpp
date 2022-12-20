 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 int x = 0;
 int y = 1;
 cout<<"Before swap:"<<endl<<"X= "<<x<<endl<<"Y= "<<y<<endl;
 x^=y^=x^=y;
 cout<<"After swap: (x^=y^=x^=y)"<<endl<<"X= "<<x<<endl<<"Y= "<<y;

}
