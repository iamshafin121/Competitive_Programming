#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            a.push_back(x);
        }
        
        bool flag = true;

        for(ll i=0; i<n; i++){
            if(a[i]<=i*2 || a[i]<= ((n-1-i)*2)){
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}