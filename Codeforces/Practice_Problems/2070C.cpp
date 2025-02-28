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
        string s; cin >> s;
        vector<ll> v(n); for(auto &ele : v) cin >> ele;

        ll low = 0, high = 1e9, ans = 0;
        while(low <= high){
            ll mid = low + (high-low)/2;
            ll count = 0 ,flag = 1;
            for(ll i=0; i<n; i++){
                if(v[i] <= mid) continue;
                if((s[i] == 'R') ^ flag){
                    count += flag;
                    flag ^= 1;
                }
            }
            if(count <= k){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        cout << ans << endl;

    }
    
    return 0;
}