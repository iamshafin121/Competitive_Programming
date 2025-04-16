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
        vector<ll> a,b,c; 
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            a.push_back(x);
        }
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            b.push_back(x);
        }
        map<ll,ll> A,B;
        ll cnt = 0;
        for(ll i=0; i<n; i++){
            cnt++;
            if(a[i]!= a[i+1] || i == n-1){
                A[a[i]] = max(A[a[i]], cnt);
                cnt = 0;
            }
        }

        cnt = 0;
        for(ll i=0; i<n; i++){
            cnt++;
            if(b[i]!= b[i+1] || i == n-1){
                B[b[i]] = max(B[b[i]], cnt);
                cnt = 0;
            }
        }

        ll ans = 1;
        for(auto pr: A){
            ans = max((pr.second+B[pr.first]),ans);
        }
        for(auto pr: B){
            ans = max((pr.second+A[pr.first]),ans);
        }
        cout << ans << endl;

    }
    
    return 0;
}