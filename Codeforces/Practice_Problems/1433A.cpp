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


ll count(ll x){
    ll num = (x%10)-1;
    ll digit = 0;
    while(x){
        x /= 10;
        digit++;
    }
    return ((num*10) + ((digit*(digit+1))/2));
}

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll x; cin >> x;
        ll ans = count(x);
        cout << ans << endl;
    }
    
    return 0;
}