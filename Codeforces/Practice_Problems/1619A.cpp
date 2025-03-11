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
        if(s.size()&1) cout << "NO" << endl;
        else{
            ll i = 0, j = s.size()/2;
            bool flag = true;
            for(; j<s.size(); i++,j++){
                if(s[i] != s[j]){
                    flag = false;
                    break;
                }
            }
            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}