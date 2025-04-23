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
    
    ll n, m; cin >> n >> m;
    set<char> st;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            char x; cin >> x;
            st.insert(x);
        }
    }
        bool flag = true;
        for(auto clr : st){
            if(clr != 'W' && clr != 'B' && clr != 'G'){
                cout << "#Color" << endl; flag = false; break;
            }
        }
        if(flag) cout << "#Black&White" << endl;
    
    return 0;
}