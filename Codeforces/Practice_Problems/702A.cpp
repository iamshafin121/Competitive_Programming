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
    
    ll n; cin >> n;
    vector<ll> a(n); for(auto &ele : a) cin >> ele;
    ll ans = 1, curr_max = 1;
    for(ll i=1; i<n; i++){
        if(a[i] <= a[i-1]){
            curr_max = 1;
        }
        else{
            curr_max ++;
        }
        ans = max(ans,curr_max);
    }

    cout << ans << endl;
    
    return 0;
}