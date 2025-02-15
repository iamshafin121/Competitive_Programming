#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    return a.second < b.second;
}

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    ll t; cin >> t;
    while(t--){
        ll n, p; cin >> n >> p;
        vector<ll> a(n); for(auto &ele : a) cin >> ele;
        vector<ll> b(n); for(auto &ele : b) cin >> ele;
        vector<pair<ll,ll>> vp(n); 
        for(ll i=0; i<n; i++){
            vp[i].first = a[i];
            vp[i].second = b[i];
        }
        sort(vp.begin(),vp.end(),cmp);

        ll cost = p;
        ll count_person = 1;
        for(ll i=0; i<vp.size(); i++){
            if(vp[i].second < p){
                if(count_person+vp[i].first >= n){
                    ll need_person = n-count_person;
                    cost += (need_person*vp[i].second);
                    count_person += need_person;
                    break;
                }
                else{
                    cost += (vp[i].first*vp[i].second);
                    count_person += vp[i].first;
                }
            }
        }

        if(count_person < n) cost += (p * (n-count_person));

        cout << cost << endl;
    }
    
    
    return 0;
}


