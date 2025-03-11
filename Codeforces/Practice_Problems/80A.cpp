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

bool is_prime(ll num){
    for(ll i=2; i*i<=num; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, m; cin >> n >> m;
    bool is_between_prime = false;
    for(ll i=n+1; i<m; i++){
        if(is_prime(i)){
            is_between_prime = true;
            break;
        }
    }

    if(is_between_prime){
        cout << "NO" << endl;
    }
    else{
        if(is_prime(m)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}