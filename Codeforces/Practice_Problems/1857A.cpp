#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll sum = 0;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            sum += x;
        }
        
        if(sum&1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}