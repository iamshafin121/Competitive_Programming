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

        ll n, k, q; cin >> n >> k >> q;
        vector<ll> a(n); for(ll i=0; i<n; i++) cin >> a[i];

        ll ans = 0, cnt = 0;
        for(ll i=0; i<n; i++){
            if(a[i] <= q) cnt++;
            else{
                if(cnt >= k){
                    ll num = cnt-k+1;
                    ans += ((num*(num+1))/2);
                }
                cnt = 0;
            }
        }
        if(cnt >= k){
            ll num = cnt-k+1;
            ans += ((num*(num+1))/2);
        }
        cout << ans << endl;

    }
    
    return 0;
}