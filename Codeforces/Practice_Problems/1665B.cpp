#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    ll t; cin >> t;
    while(t--){
    	ll n; cin >> n;
        map<ll,ll> mp;
        for(ll i=0; i<n; i++){
        	ll x; cin >> x;
            mp[x]++;
        }
        
        ll curr_ct = 0;
        for(auto pr : mp){
        	if(pr.second > curr_ct) curr_ct = pr.second;
        }
        
        ll tot_ct = curr_ct;
        ll op = 0;
        while(tot_ct < n){
        	ll need = (n-tot_ct);
            if(need <= tot_ct){
            	op += need;
            }
            else{
            	op += tot_ct;
            }
            tot_ct += tot_ct;
            op += 1;
        }
        cout << op << endl;
    }
    
    
    return 0;
}