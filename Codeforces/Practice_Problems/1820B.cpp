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

        string s; cin >> s;
        ll first = 0, last = 0;
        ll max_ones = 0, ans = 0;
        bool flag = true;

        for(ll i=0; i<s.size(); i++){
            if(s[i] == '1') last++;
            else{
                if(flag){
                    first = last;
                    flag = false;
                }
                last = 0;
            }
            max_ones = max(last,max_ones);
        }

        if(!max_ones){
            cout << 0 << '\n';
            continue;
        }

        if(flag){
            cout << (s.size() * s.size()) << '\n';
            continue;
        }

        max_ones = max((first + last), max_ones);
        ans = (max_ones/2) + 1;
        if(max_ones & 1){
            cout <<  ans * ans << '\n';
        }
        else{
            cout << ans * (ans-1) << '\n';
        }
    }    
    return 0;
}
