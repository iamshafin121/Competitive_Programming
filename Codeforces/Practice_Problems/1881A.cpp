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
        ll n, m; cin >> n >> m;
        string x, s; cin >> x >> s;
        ll op; bool found = false;
        for(op = 0; op <= 5; op++){
            if(x.find(s) != string::npos){
                found = true;
                break;
            }
            x.append(x);
        }
        if(found) cout << op << endl;
        else cout << -1 << endl;
    }
    return 0;
}