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
    
    	ll n; cin >> n;
        vector<ll> a(n+1),b(n+1); a[0] = b[0] = 1e18;
        for(ll i=1; i<=n; i++) cin >> a[i];
        for(ll i=1; i<=n; i++) cin >> b[i];
        
        ll l=1, r=n;
        while(b[l] == a[l] && l<n) l++;
        while(b[r] == a[r] && r>1) r--;
        while(b[l-1] <= b[l] && l>1) l--;
        while(b[r+1] >= b[r] && r<n) r++;
        
        cout << l << " " << r << endl;
    }
    
    return 0;
}

    