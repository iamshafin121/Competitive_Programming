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
        vector<ll> v(n); for(auto &ele: v) cin >> ele;
        vector<ll> pos_t(n,0);
        vector<ll> neg_t(n,0);
        for(ll i=0; i<n; i++){
            if(v[i] > 0)
                if(i==0) pos_t[i] = abs(v[i]);
                else pos_t[i] = pos_t[i-1] + abs(v[i]);
            else
                if(i > 0) pos_t[i] += pos_t[i-1];
        }
        for(ll i=n-1; i>=0; i--){
            if(v[i] < 0)
                if(i==n-1) neg_t[i] = abs(v[i]);
                else neg_t[i] = neg_t[i+1] + abs(v[i]);
            else
                if(i < n-1) neg_t[i] += neg_t[i+1];
        }
        ll max_ct = 0;
        for(ll i=0; i<n; i++)
            max_ct = max(max_ct, abs(pos_t[i]+neg_t[i]));

        cout << max_ct << endl;
    }
    
    return 0;
}