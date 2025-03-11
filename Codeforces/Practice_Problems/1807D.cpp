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
        ll n, q; cin >> n >> q;

        vector<ll> a(n+2,0); 
        for(ll i=1; i<=n; i++)
            cin >> a[i];

        vector<ll> forward(n+2,0);
        for(ll i=1; i<=n; i++)
            forward[i] = forward[i-1] + a[i];

        vector<ll> backward(n+2,0);
        for(ll i=n; i>=1; i--)
            backward[i] = backward[i+1] + a[i];
        
        while(q--){
            ll l, r, k; cin >> l >> r >> k;
            ll l_to_r = (r-l+1)*k;
            ll total = forward[l-1] + l_to_r + backward[r+1];
            if(total&1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }       
    }
    
    return 0;
}