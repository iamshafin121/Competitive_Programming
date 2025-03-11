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
        vector<ll> a(n); for(auto &ele : a) cin >> ele;

        if(a[0] == 1) a[0] = 2;
        for(ll i=1; i<n; i++){
            if(a[i] == 1) a[i] = 2;
            if(a[i]%a[i-1] == 0){
                a[i]++;
            }
        }

        for(ll i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}