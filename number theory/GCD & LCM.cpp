 #include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int iterativeGCD(int a, int b)//iterative method is faster than recursive method

{

    while(b)

    {

        a%=b;

        swap(a,b);

    }

    return a;

}

int LCM(int a,int b)

{

    return((a/iterativeGCD(a,b))*b);

}

int main()

{

 int x;

 cout<<"Enter x:";

 cin>>x;

 int y;

 cout<<"Enter y:";

 cin>>y;

 cout<<"GCD: "<<iterativeGCD(x,y)<<endl<<"LCM: "<<LCM(x,y);

}

