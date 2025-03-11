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
        ll max_x = 0;
        for(ll i=0; i<v.size(); i++){
            if(i+1 != v[i]){
                max_x = __gcd(max_x,abs(v[i]-(i+1)));
            }
        }
        cout << max_x << endl;
    }
    
    return 0;
}