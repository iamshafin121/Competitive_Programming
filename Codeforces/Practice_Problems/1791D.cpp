#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
	ll n; cin >> n;
    string s; cin >> s;
    vector<ll> f(n), b(n);
    set<ll> st;
    for(ll i=0; i<n; i++){
    	st.insert(s[i]);
        f[i] = st.size();
    }
    st.clear();
    for(ll i=n-1; i>=0; i--){
    	st.insert(s[i]);
        b[i] = st.size();
    }
    
    ll ans = 0;
    for(ll i=0; i<n-1; i++){
    	ans = max(ans,(f[i]+b[i+1]));
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
    