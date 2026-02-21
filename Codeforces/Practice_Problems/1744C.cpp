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

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){

        ll n; char c;
        cin >> n >> c;

        string s; cin >> s;
        s = s + s;

        ll ans = 0, count = 0;
        bool flag = false;

        for(ll i=0; i<s.size(); i++){

            if(flag){
                count++;
                ans = max(ans,count);
            }
            if(s[i] == c) flag = true;
            if(s[i] == 'g'){
                flag = false;
                count = 0;
            }
        }

        cout << ans << "\n";

    }    
    return 0;
}
