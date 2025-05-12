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
    
    string s; cin >> s;

    ll cnt = 0; 
    char curr = 'a';

    for(ll i=0; i<s.size(); i++){
        ll num1 = abs(s[i]-curr);
        ll num2 = ('z' - curr) + 1 + (s[i] - 'a');
        ll num3 = (curr - 'a') + 1 + ('z' - s[i]);
        cnt += min(min(num1,num2),num3);
        curr = s[i];
    }

    cout << cnt << endl;

    
    return 0;
}