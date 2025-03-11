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
        ll n, x; cin >> n >> x;
        ll num = 0;
        for(ll i=0; i<n; i++){
            num |= i;
        }
        if(num == x){
            for(ll i=0; i<n; i++){
                cout << i << " ";
            }
            cout << endl;
            continue;
        }

        vector<ll> ans;
        for(ll i=0; i<n-1; i++){
            if((i|x) == x){
                ans.push_back(i);
            }
            else{
                break;
            }
        }
        while(ans.size() != n){
            ans.push_back(x);
        }
        
        for(ll i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}