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
        vector<ll> v;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            v.push_back(x);
        }

        sort(v.begin(),v.end());

        ll count = 0;
        ll value = 0;
        ll press = 0;
        for(ll i=0, j=n; i<n; i++, j--){
            if(v[i] > count){
                ll diff = (v[i] - count);
                ll curr_value = diff * j;

                if((value + curr_value) >= k){
                    ll need = k - value;
                    press += need;
                    break;
                }

                press += (diff*j) + 1;
                value += curr_value;
                count += diff;
            }
            else if(v[i] == count) press++;
        }

        cout << press << endl;

            
    }
    
    return 0;
}