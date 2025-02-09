#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v;
        ll total = 0;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            v.push_back(x);
            total += x;
        }

        sort(v.begin(), v.end());

        if(n <= 2){
            cout << -1 << endl;
            continue;
        }

        ll l = 0, r = 1e12, ans = -1;
        while(l<=r){
            ll mid = l + (r-l)/2;
            double avg = (double)(total + mid) / (n*2.0);

            ll unhappy = 0;
            for(int i=0; i<n; i++){
                if(v[i] < avg) unhappy++;
            }

            if(unhappy > (n/2)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        cout << ans << endl;
        
    }
    
    return 0;
}