#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
	ll n; cin >> n;
    vector<ll> dgt(n); for(auto &ele : dgt) cin >> ele;
    ll ans = 0;
    for(ll i=0; i<n; i++){
    	ll num = 1;
    	for(ll j=0; j<n; j++){
        	if(i == j){
            	num *= (dgt[j]+1);
            }
            else{
            	num *= dgt[j];
            }
        }
        ans = max(ans,num);
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
    