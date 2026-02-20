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

        ll a, b, c;
        cin >> a >> b >> c;
        
        bool flag = false;

        if((2*b-c)%a == 0){
            if((2*b-c)/a > 0) flag = true;
        }

        if((c+a)%(2*b) == 0) flag = true;

        if((2*b-a)%c == 0){
            if((2*b-a)/c >0) flag = true;
        }

        if(a == b && b == c) flag = true;


        if(flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';


    }    
    return 0;
}
