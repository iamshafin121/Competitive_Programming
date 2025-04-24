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
        ll n,x; cin >> n >> x;

        for(ll i=0; i<n; i++){
            if(i==x) continue;
            cout << i << " ";
        }
        if(n > 1 && x < n){
            cout << x;
        }
        if(n == 1 && x == 0){
            cout << 0 ;
        }
        cout << endl;

    }
    
    return 0;
}