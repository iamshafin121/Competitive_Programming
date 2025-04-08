#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
	ll a, b, ans = 1e18; cin >> a >> b;
    if((min(a,b)*2) >= max(a,b)){
    	ll num = pow((min(a,b)*2),2);
    	ans = min(num,ans);
    }
    if(max(a,b) >= (min(a,b)*2)){
    	ll num = pow(max(a,b),2);
    	ans = min(num,ans);
    }
    if((max(a,b)*2) >= min(a,b)){
    	ll num = pow((max(a,b)*2),2);
    	ans = min(num,ans);
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
    