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

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
    
    	ll n, ans = 2; cin >> n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        while(1){
        	set<ll> st;
            for(ll i=0; i<a.size(); i++){
            	st.insert(a[i]%ans);
            }
            if(st.size() == 2) break;
        	ans *= 2;
        }
        cout << ans << endl;
        
    }
    
    return 0;
}

    