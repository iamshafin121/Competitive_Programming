#include<bits/stdc++.h>
using namespace std;
#define ll long long int


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
        vector<ll> s(n); for(ll i=0; i<n; i++) cin >> s[i];
        sort(s.rbegin(),s.rend());
        ll ans = 1e18;
        for(ll i=0; i<n-1; i++){
            ans = min(ans, abs(s[i]-s[i+1]));
        }
        cout << ans << endl;
    }
    
    return 0;
}