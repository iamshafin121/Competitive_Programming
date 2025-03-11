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

        vector<ll> v;
        ll ans = accumulate(a.begin(),a.end(),0LL);
        while(n > 1){
            for(ll i=0; i<n-1; i++){
                v.push_back((a[i+1]-a[i]));
            }
            ans = max(ans,abs(accumulate(v.begin(),v.end(),0LL)));
            for(ll i=0; i<v.size(); i++){
                a[i] = v[i];
            }
            v.clear();
            --n;
        }


        cout << ans << endl;

    }
    
    return 0;
}