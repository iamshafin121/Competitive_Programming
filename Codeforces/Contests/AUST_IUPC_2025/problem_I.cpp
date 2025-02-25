#include<bits/stdc++.h>
using namespace std;
#define ll long long int


/*
       _______ ___  ___ ____   ______ _______ __   ___
      /  ____//  / /  // _  | / ____//_  ___//  | /  /
     (___   )/  /_/  // /_| |/ /___   / /   /   |/  /
    ____/  //  __   // ___  / ____/__/ /__ /  | |  /
   /______//__/ /__//_/  |_/_/   /_______//__/| __/
                                                  
*/

void print_vec(vector<ll> x){
    for(ll i=1; i<x.size(); i++){
        cout << x[i] << " ";
    }
    cout << endl;
}


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a(n); for(ll i=0; i<n; i++) cin >> a[i];
        vector<ll> v(n+1);
        sort(a.rbegin(),a.rend());
        for(ll i=1; i<=n; i++){
            v[i] = a[i-1] - i;
        }

        set<ll> st;
        bool flag = true;
        for(ll i=1; i<=n; i++){
            ll st_size = st.size();
            st.insert(v[i]);
            if(st.size() == st_size){
                flag = false;
                break;
            }
        }
        
        if(flag){
            for(ll i=0; i<n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    
    return 0;
}