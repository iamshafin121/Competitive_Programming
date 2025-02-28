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

bool is_square(ll n){
    ll num = sqrt(n);
    return (num*num) == n;
}

void print_vec(vector<ll> v){
    for(ll i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void print_dq(deque<ll> v){
    for(ll i=0; i<v.size(); i++){
        cout << v[i] << " ";
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
        if(is_square((n*(n+1))/2)){
            cout << -1 << endl; continue;
        }
        
        deque<ll> dq;
        for(ll i=1; i<=n; i++)
            dq.push_back(i);
        
        ll count = 0; ll i = 0;
        vector<ll> v;
        while(!dq.empty()){
            if(is_square(count+dq[0])){
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else{
                v.push_back(dq[0]);
                count += dq[0];
                dq.pop_front();
            }
        }

        for(ll i=0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}