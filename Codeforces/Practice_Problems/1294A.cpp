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
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        ll maxi = max(a,max(b,c));
        ll need = 0; 
        need +=  (maxi - a);
        need +=  (maxi - b);
        need +=  (maxi - c);
        if(n < need){
            cout << "NO" << endl;
        }
        else{
            if((n-need)%3 == 0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}