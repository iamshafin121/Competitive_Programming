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
        ll n, m; cin >> n >> m;
        vector<vector<ll>> v(n+2,vector<ll>(m+2,0));
        for(ll i=1; i<=n; i++){
            for(ll j=1; j<=m; j++){
                ll x; cin >> x;
                v[i][j] = x;
            }
        }
        vector<int> a((n*m)+5, 0);

        for(ll i=1; i<=n; i++){
            for(ll j=1; j<=m; j++){
                ll num = v[i][j];
                if(num == v[i-1][j] || num == v[i+1][j] || num == v[i][j-1] || num == v[i][j+1]){
                    a[num] = 2;
                }

                if(a[num] == 0) a[num] = 1;
            }
        }

        ll total = 0;
        ll max = 0;
        for(ll i=0; i<a.size(); i++){
            if(a[i] > max) max = a[i];
            total += a[i] ;
        }

        cout << (total-max) << endl;
        
    }
    
    return 0;
}