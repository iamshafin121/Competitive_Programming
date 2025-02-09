#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll q; cin >> q;
    while(q--){
        ll n, k; cin >> n >> k;
        vector<ll> v;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        if((v[n-1]-k) > (v[0]+k)){
            cout << -1 << endl;
            continue;
        }
        else{
            cout << (v[0]+k) << endl;
        }
    }
    
    return 0;
}