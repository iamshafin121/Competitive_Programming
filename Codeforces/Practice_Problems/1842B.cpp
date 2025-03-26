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


bool check(ll num, ll x){
    for(ll i=0; i<31; i++){
    	if((num&(1<<i)) && (x&(1<<i))==0)
        	return false;
    }
    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
    
        ll n, x; cin >> n >> x;
        ll arr[3][n];
        for(ll i=0; i<3; i++){
        	for(ll j=0; j<n; j++){
            	cin >> arr[i][j];
            }
        }
        
        ll ans = 0;
        for(ll i=0; i<3; i++){
        	for(ll j=0; j<n; j++){
            	if(check(arr[i][j],x))
                	ans |= arr[i][j];
                else break;
            }
        }
        
        if(ans == x) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    }
    
    return 0;
}