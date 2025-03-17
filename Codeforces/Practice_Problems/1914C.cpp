#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    ll t; cin >> t;
    while(t--){
    	ll n, k; cin >> n >> k;
        vector<ll> a(n+1,0);
        vector<ll> b(n+1,0);
        for(ll i=1; i<=n; i++){
        	ll x; cin >> x;
            a[i] = a[i-1] + x;
        }
        
        for(ll i=1; i<=n; i++){
        	ll x; cin >> x;
            b[i] = max(b[i-1],x);
        }
        
        ll ans = 0;
        
        for(ll i=1; i<=n && i<=k ; i++){
        	ans = max(ans,(a[i]+((k-i)*b[i])));
        }
        
        cout << ans << endl;
    }
    
    
    return 0;
}