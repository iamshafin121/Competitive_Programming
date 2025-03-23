#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    
    ll t; cin >> t;
    while(t--){
    	ll n,k,a,b; cin >> n >> k >> a >> b;
        vector<pair<ll,ll>> coor(n+1); coor.push_back({0,0});
        for(ll i=1; i<=n; i++){
        	ll x, y; cin >> x >> y;
            coor[i] = {x,y};
        }
        ll ans = (abs(coor[a].first - coor[b].first) + abs(coor[a].second - coor[b].second));
        ll min_a = 1e18, min_b = 1e18;
        for(ll i=1; i<=k; i++){
        	min_a = min(min_a,(abs(coor[a].first - coor[i].first) + abs(coor[a].second - coor[i].second)));
            min_b = min(min_b,(abs(coor[b].first - coor[i].first) + abs(coor[b].second - coor[i].second)));
        }
        ans = min(ans,(min_a + min_b));
        
        cout << ans << endl;
    }
    
    
    return 0;
}