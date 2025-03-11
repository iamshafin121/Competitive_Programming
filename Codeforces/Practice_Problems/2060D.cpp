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

        for(ll i=0; i<n-1; i++){
            ll min_ele = min(a[i],a[i+1]);
            a[i] -= min_ele; a[i+1] -= min_ele;
            if(a[i]>a[i+1]){
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}