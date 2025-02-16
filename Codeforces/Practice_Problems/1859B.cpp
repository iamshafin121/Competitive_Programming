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


bool cmp(vector<ll> x, vector<ll> y){
    return x[1] > y[1];
}

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<vector<ll>> v(n);
        for(ll i=0; i<n; i++){
            ll m; cin >> m;
            for(ll j=0; j<m; j++){
                ll x; cin >> x;
                v[i].push_back(x);
            }
        }

        for(ll i=0; i<n; i++) sort(v[i].begin(),v[i].end());
        sort(v.begin(), v.end(), cmp);

        ll total = 0;
        set<ll> s;
        for(ll i=0; i<n-1; i++){
            total += v[i][1];
            s.insert(v[i][0]);
        }
        s.insert(v[n-1][0]);
        total += (*s.begin());


        cout << total << endl;
        
    }
    
    return 0;
}