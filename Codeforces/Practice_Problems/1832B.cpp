#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    
    ll t; cin >> t;
    while(t--){
    
    	ll n,k; cin >> n >> k;
        vector<ll> a(n+1,0), fwd(n+2,0), bwd(n+2,0);
        for(ll i=1; i<=n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for(ll i=1; i<=n; i++) fwd[i] = fwd[i-1] + a[i];
        for(ll i=n; i>=1; i--) bwd[i] = bwd[i+1] + a[i];
        
        ll ans = -1e18;
        for(ll i=0; i<=k; i++){
        	ll sum = fwd[n] - (fwd[i*2] + bwd[(n-(k-i))+1]);
            ans = max(ans,sum);
        }
        cout << ans << endl;
    }
    
    
    return 0;
}