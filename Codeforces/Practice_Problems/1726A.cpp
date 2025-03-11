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
        ll n; cin >> n;
        vector<ll> v(n); for(auto &ele : v) cin >> ele;
        ll maximum = v[n-1] - v[0];
        for(ll i=1; i<n; i++)
            maximum = max(maximum,v[i]-v[0]);
        for(ll i=0; i<n-1; i++)
            maximum = max(maximum,v[n-1]-v[i]);
        
        for(ll i=0; i<n-1; i++)
            maximum = max(maximum,v[i]-v[i+1]);

        cout << maximum << endl;
    }
    
    return 0;
}