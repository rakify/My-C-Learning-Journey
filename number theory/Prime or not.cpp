 #include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime (int n) {

    if (n<=1) return false;

    int sqrtn = sqrt(n);//its a must. otherwise loop will call it every fuckin time..

    for ( int i = 2; i <= sqrtn; i++ ) {

        if (n%i == 0) return true;

    }

    return false;

}

int main()

{

    cout<<"Enter a number to check if its prime or not: ";

    int x;cin>>x;

    if(isPrime(x))cout<<"Its a prime.";

    else cout<<"Its not a prime.";



}

