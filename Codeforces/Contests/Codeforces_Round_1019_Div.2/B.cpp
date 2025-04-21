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

void string_rvs(ll i,ll j,string &s){
    while(i<j){
        swap(s[i],s[j]);
        i++; j--;
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s; cin >> s;
        ll idx;
        bool flag = true;
        for(ll i=0; i<s.size(); i++){
            if((s[i] == '1') && flag == true){
                idx = i;
                flag = false;
            }

            if(!flag && s[i] == '0'){
                ll j = i;
                while(j+1 != n){
                    if(s[j+1] == '1'){
                        break;
                    }
                    j++;
                }
                string_rvs(idx, j, s);
                break;
            }
        }

        ll ans = 0;
        ll curr = 0;
        for(ll i=0; i<n; i++){
            if((s[i]-'0') == curr){
                ans++;
            }
            else{
                ans += 2;
                if(curr == 0) curr = 1;
                else curr = 0;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}