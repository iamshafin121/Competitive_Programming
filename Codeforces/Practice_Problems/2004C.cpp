#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        vector<ll> costs;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            costs.push_back(x);
        }

        sort(costs.begin(),costs.end(),greater<int>());

        ll max_ele = costs[0];
        ll diff = 0;

        for(ll i=1; i<n; i++){
            if(i&1){
                if(costs[i] < max_ele && k > 0){
                    ll need = max_ele - costs[i];
                    if(need > k){
                        costs[i] += k;
                        k = 0;
                    }
                    else{
                        costs[i] += need;
                        k -= need; 
                    }
                }

                if(costs[i] < max_ele) diff += (max_ele - costs[i]);
            }
            else{
                max_ele = costs[i];
            }
        }

        cout << ((n&1) ? (diff+costs[n-1]) : diff) << endl;


    }
    
    return 0;
}