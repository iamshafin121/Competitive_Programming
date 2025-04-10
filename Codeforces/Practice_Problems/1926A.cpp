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
        string s; cin >> s;
        ll a_ct = 0, b_ct = 0;
        for(ll i=0; i<s.size(); i++){
            if(s[i] == 'A') a_ct++;
            else b_ct++;
        }
        if(a_ct > b_ct) cout << "A" << endl;
        else cout << "B" << endl;
    }
    
    return 0;
}