#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M  (ll)1e9+7

/*
       _______ ___  ___ ____   ______ _______ __   ___
      /  ____//  / /  // _  | / ____//_  ___//  | /  /
     (___   )/  /_/  // /_| |/ /___   / /   /   |/  /
    ____/  //  __   // ___  / ____/__/ /__ /  | |  /
   /______//__/ /__//_/  |_/_/   /_______//__/| __/
                                                  
*/

ll count(vector<ll> &a, vector<ll> &b, ll n){
	vector<ll> grt(n,0);
    ll i=0, j=0;
    while(i<a.size() && j<b.size()){
    	if(a[i]<=b[j]){
        	i++;
        }
        else{
        	grt[j] = n-i;
            j++;
        }
    }
    
    if(j!=n) return 0;
    ll ans = 1;
    reverse(grt.begin(),grt.end());
    for(ll i=0; i<grt.size(); i++){
    	ans = ((ans * (grt[i]-i)) % (M));
    }
    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
    	ll n; cin >> n;
        vector<ll> a(n),b(n); 
        for(auto &ele : a) cin >> ele;
        for(auto &ele : b) cin >> ele;
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll ans = count(a,b,n);
        cout << ans  << endl;
        
    }
    
    return 0;
}

