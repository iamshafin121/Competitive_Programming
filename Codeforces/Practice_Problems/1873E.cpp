#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(ll n, vector<ll> &a, ll x){
	ll cnt = 0;
	for(ll i=0; i<a.size(); i++){
    	if(a[i]<n){
        	cnt += (n-a[i]);
            if(cnt > x) return false;
        }
    }
    return true;
}
int main(){
    
    ll t; cin >> t;
    while(t--){
    	ll n, x; cin >> n >> x;
        vector<ll> a(n); for(auto &ele : a) cin >> ele;
        
        ll hi = 1e18, lo = 1, mid, ans = 1;
        while(lo<=hi){
        	mid = lo + ((hi-lo) >> 1);
            if(check(mid,a,x)){
            	ans = mid;
            	lo = mid + 1;
            }
            else{
            	hi = mid - 1;
            }
        }
        cout << ans << endl;
    }
    
    
    return 0;
}