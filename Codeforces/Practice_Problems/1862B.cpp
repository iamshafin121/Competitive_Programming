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
        vector<ll> b,a;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            b.push_back(x);
        }

        a.push_back(b[0]);

        for(ll i=1; i<n; i++){
            if(b[i] < b[i-1]) a.push_back(b[i]);
            a.push_back(b[i]);
        }

        cout << a.size() << endl;

        for(ll i=0; i<a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;

    }    
    return 0;
}
