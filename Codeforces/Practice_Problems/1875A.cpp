#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll a, b, n; cin >> a >> b >> n;
        vector<ll> v(n); for(auto &ele: v) cin >> ele;
        sort(v.rbegin(),v.rend());ll count = b;
        for(ll i=0; i<v.size(); i++){
            if(v[i] >= a) count += a-1;
            else count += v[i];
        }
        cout << count << endl;
    }
    
    return 0;
}