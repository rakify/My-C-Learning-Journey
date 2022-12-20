#include"bits/stdc++.h"
using namespace std;
typedef long long ll;

int main() {

      ll n;
      cin>>n;
      string s;
      cin>>s;
      string s1, s2;

      for(int i=0; i<n/2; i++) {
        s1 += s[i];
      }
      for(int i=(n/2); i<n; i++) {
        s2 += s[i];
      }
      cout<<"s1 = "<<s1<<" "<<"s2 = "<<s2<<endl;
      if(s1 == s2) cout<<"Yes";
      else cout<<"No";


}
