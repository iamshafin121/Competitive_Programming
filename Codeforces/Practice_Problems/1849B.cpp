#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    ll t; cin >> t;
    while(t--){
    	ll n, k; cin >> n >> k;
        map<ll,set<ll>> mp;
        for(ll i=1; i<=n; i++){
        	ll x; cin >> x;
            mp[x%k].insert(i);
        }
        
        auto it = mp.begin();
        if(it->first == 0){
        	for(auto ele : it->second){
            	cout << ele << ' ';
            }
        }
        
        for(auto it=mp.rbegin(); it!=mp.rend(); it++){
            if(it->first == 0) break;
        	for(auto ele : it->second){
            	cout << ele << ' ';
            }
        }
        cout << endl;
    }
    
    
    return 0;
}