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

pair<ll,ll> minimize(ll a, ll b){
    ll count = 0;
    while(a){
        if(a < b) return {a,count};
        a /= 2;
        count++;
    }
    return {a,count};
}

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a(n); for(auto &ele : a) cin >> ele;
        
        ll ans = 0;
        for(ll i=n-2; i>=0; i--){
            auto x = minimize(a[i], a[i+1]);
            a[i] = x.first;
            ans += x.second;
        }

        bool flag = true;
        for(ll i=0; i<n-1; i++){
            if(a[i] >= a[i+1]){
                flag = false; break;
            }
        }

        if(!flag){
            cout << -1 << endl;
            continue;
        }
        cout << ans << endl;
    }
    
    return 0;
}