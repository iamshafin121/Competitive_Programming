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
        ll n, k; cin >> n >> k;
        vector<ll> v(n); for(auto &ele : v) cin >> ele;
        sort(v.begin(),v.end());
        ll max_ct = 1;
        ll count = 1;
        for(ll i=0; i<n-1; i++){
            if((v[i]+k) >= v[i+1])  count++;
            else count = 1;
            max_ct = max(max_ct,count);
        }
        cout << (n-max_ct) << endl;
    }
    
    return 0;
}