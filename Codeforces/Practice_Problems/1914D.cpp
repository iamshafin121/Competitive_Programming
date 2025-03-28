#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M  (ll)1e9+7

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
        vector<pair<ll,ll>> a(n), b(n), c(n);
        for(ll i=0; i<n; i++){
        	ll x; cin >> x;
            a[i] = {x,i};
        }
        for(ll i=0; i<n; i++){
        	ll x; cin >> x;
            b[i] = {x,i};
        }
        for(ll i=0; i<n; i++){
        	ll x; cin >> x;
            c[i] = {x,i};
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        
        set<ll> st; ll ans = 0;
        for(ll i=n-3; i<n; i++){
        	ll ct = a[i].first; st.insert(a[i].second);
        	for(ll j=n-3; j<n; j++){
            	ll sz = st.size(); st.insert(b[j].second);
                if(sz == st.size()) continue;
                ct += b[j].first;
            	for(ll k=n-3; k<n; k++){
                	sz = st.size(); st.insert(c[k].second);
                	if(sz == st.size()) continue;
                	ct += c[k].first; ans = max(ans,ct);
                    st.erase(c[k].second); ct -= c[k].first;
                }
                st.erase(b[j].second); ct -= b[j].first;
            }
            st.clear(); 
        }
        cout << ans << endl;
    }
    
    return 0;
}

    