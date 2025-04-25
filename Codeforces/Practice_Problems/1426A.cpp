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
        ll n, x; cin >> n >> x;
        ll num = n-2;
        if(num <= 0){
            cout << 1 << endl;
        }
        else{
            if(num%x == 0){
                cout << (num/x)+1 << endl;
            }
            else{
                cout << (num/x)+2 << endl;
            }
        }
    }
    
    return 0;
}