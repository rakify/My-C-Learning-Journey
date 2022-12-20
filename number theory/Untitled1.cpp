#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll t;cin>>t;
	while(t--)
    {
        ll n;
    string s;
	cin>>n>>s;
	int one = 0, zero = 0;
	for (int i = 1; i < n; ++i) {
		if (s[i] == '1' && s[i - 1] == '1') one++;
		else if (s[i] == '0' && s[i - 1] == '0')zero++;
	}
	printf("%d\n", max(zero,one));
    }

}
