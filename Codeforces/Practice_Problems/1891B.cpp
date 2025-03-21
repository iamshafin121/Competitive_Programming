#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    
    ll t; cin >> t;
    while(t--){
    	ll n, q; cin >> n >> q;
        vector<ll> a(n); for(auto &ele : a) cin >> ele;
        vector<ll> x(q); for(auto &ele : x) cin >> ele;
        
        ll curr = 31;
        for(ll i=0; i<q; i++){
        
        	ll num = (1<<x[i]);
            if(curr == 1) break;
            else if(x[i] >= curr){ continue; }
            else{ curr = x[i]; }
            
            ll add = (1<<(x[i]-1));
            for(ll j=0; j<n; j++){
            	if(a[j]%num == 0){
                	a[j] += add;
                }
            }
        }
        
        for(ll i=0; i<n; i++){
        	cout << a[i] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}