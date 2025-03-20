#include<bits/stdc++.h>
#define ll long long int
using namespace std;

set<ll> factors(ll n){
	set<ll> fc;
    for(ll i=1; i*i<=n; i++){
    	if(n%i == 0){
        	fc.insert(i);
            fc.insert(n/i);
        }
    }
    return fc;
}

int main(){
    
    ll t; cin >> t;
    while(t--){
    	ll n; cin >> n;
        vector<ll> v(n+1,0); 
        for(ll i=1; i<=n; i++){
        	ll x; cin >> x;
            v[i] = v[i-1] + x;
        }
        set<ll> fc = factors(n); fc.erase(n);
        
        ll maxi = 0;
        for(auto ele : fc){
        	ll mx = 0, mn = 1e18;
        	for(ll i=ele; i<=n; i+=ele){
            	mx = max(mx,(v[i]-v[i-ele]));
                mn = min(mn,(v[i]-v[i-ele]));
            }
            maxi = max(maxi,(mx-mn));
        }
        cout << maxi << endl;
    }
    
    
    return 0;
}