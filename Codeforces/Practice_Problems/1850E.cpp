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


bool check(ll mid, vector<ll> &a, ll c){
    __int128 cnt = 0, num = mid*2;
    for(ll i=0; i<a.size(); i++){
        __int128 x = (num + a[i]);
        __int128 X = (x*x);
        if(X + cnt > c) return false;
        cnt += X;
    }
    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll n, c; cin >> n >> c;
        vector<ll> a(n); for(auto &ele : a) cin >> ele;


        ll lo = 1, hi = 1e18, mid, ans = 1;
        while(lo<=hi){
            mid = lo + ((hi-lo) >> 1);
            if(check(mid,a,c)){
                ans = mid;
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}