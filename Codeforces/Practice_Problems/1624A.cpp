#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n); for(auto &ele : v) cin >> ele;
        sort(v.rbegin(),v.rend());
        
        ll ans = 0;
        for( ll i=1; i<v.size(); i++ ){
            if( (v[i] + ans) != v[0] ){
                ans += (v[0] - (v[i] + ans));
                v[i] += ans;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}