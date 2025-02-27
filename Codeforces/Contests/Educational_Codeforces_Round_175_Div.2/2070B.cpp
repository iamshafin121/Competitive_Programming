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
        ll n, x, k; cin >> n >> x >> k;
        string s; cin >> s;
        bool zero_found = false, same_found = false;
        ll z = x, get_same = -1, get_zero = -1;
        for(ll i=0; i<n; i++){
            if(s[i] == 'R') z++;
            else z--;
            if(z == 0 && !zero_found){
                zero_found = true;
                get_zero = (i+1);
            }
            if(z == x && !same_found){
                same_found = true;
                get_same = (i+1);
            }
            if(zero_found && same_found) break;
        }

        if(get_zero == -1) cout << 0 << endl;
        else{
            if(get_same == -1) cout << 1 << endl;
            else{
                ll count = 1;
                k -= get_zero;
                count += (k/get_same);
                cout << count << endl;
            }
        }

    }
    
    return 0;
}