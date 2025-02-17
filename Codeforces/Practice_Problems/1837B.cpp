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
        string s; cin >> s;
        char x = s[0];
        ll count = 0;
        ll max_ct = 0;
        for(ll i=0; i<n; i++){
            if(s[i] == x){
                count++;
            }
            else{
                count = 1;
                x = s[i];
            }
            max_ct = max(max_ct, count);
        }

        cout << (max_ct+1) << endl;
    }
    
    return 0;
}