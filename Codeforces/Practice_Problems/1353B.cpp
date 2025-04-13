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
        ll n, k, ct = 0; cin >> n >> k;
        vector<ll> a(n); for(auto &ele : a) cin >> ele;
        vector<ll> b(n); for(auto &ele : b) cin >> ele;
        sort(a.begin(),a.end()); sort(b.rbegin(),b.rend());
        for(ll i=0; i<n && ct<k; i++){
            if(a[i] < b[i]){
                swap(a[i],b[i]); ct++;
            } 
        }

        ll ans = 0;
        for(ll i=0; i<n; i++){
            ans += a[i]; 
        }

        cout << ans << endl;
    }
    
    return 0;
}