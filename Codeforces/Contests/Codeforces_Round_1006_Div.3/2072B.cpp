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
    
    ll t; cin >> t;c
    while(t--){
        ll n; cin >> n;
        string s; cin >> s;
        ll cnt_dsh = 0;
        ll cnt_hyp = 0;
        for(ll i=0; i<s.size(); i++){
            if(s[i] == '-') cnt_hyp++;
            else cnt_dsh++;
        }

        if(cnt_dsh > 0 && cnt_hyp > 1){
            ll half, per, total;
            if(cnt_hyp&1){
                half = (cnt_hyp/2)+1;
                per = cnt_dsh * half;
                half--;
                total = per*half;
            }
            else{
                half = cnt_hyp/2;
                per = cnt_dsh * half;
                total = per*half;
            }
            cout << total << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    
    return 0;
}