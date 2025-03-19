#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    ll t; cin >> t;
    while(t--){
    
    	ll n; cin >> n;
        vector<ll> a(n); for(auto &ele : a) cin >> ele;
        vector<pair<ll,ll>> idx;
        ll first = 0;
        for(ll i=1; i<n; i++){
        	if((a[i]&1) == (a[i-1]&1)){
            	idx.push_back({first,i-1});
                first = i;
            }
        }
        idx.push_back({first,n-1});
        
        ll maxi = a[0];
        for(auto pr : idx){
        	ll cnt = 0; bool flag = true;
            ll l = pr.first, r = pr.second;
        	while(l<=r){
            	cnt += a[l];
                if(a[l] > cnt) cnt = a[l];
                maxi = max(cnt,maxi);
                l++;
            }
        }
        cout << maxi << endl;
    }
    
    
    return 0;
}