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
        ll count = 0;
        bool in_s = true;
        for(ll i=0; i<s.size(); i++){
            if(in_s){
                if(s[i] == '1'){
                    count++;
                    in_s = false;
                }
            }
            else{
                if(s[i] == '0'){
                    count++;
                    in_s = true;
                }
            }
        }
        cout << count << endl;
    }
    
    return 0;
}