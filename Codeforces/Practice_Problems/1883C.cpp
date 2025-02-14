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
        ll min_num = INT_MAX; ll even = 0, odd = 0;
        bool flag = false;
        vector<ll> v(n); for(auto &ele : v) cin >> ele;
        for(ll i=0; i<v.size(); i++){
            if(v[i]&1) odd++; else even++;    
            min_num = min(min_num,(k-(v[i]%k)));
            if(v[i]%k == 0) flag = true;
        }
        if(k==4){
            if(even >= 2) min_num = min(0LL,min_num);
            else if(even == 1) min_num = min(1LL,min_num);
            else if(even == 0) min_num = min(2LL,min_num);
        }
        if(flag){
            cout << 0 << endl;
        }
        else{
            cout << min_num << endl;
        }
    }
    
    return 0;
}