#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;

        map<string,vector<int>> m;

        for(ll i=1; i<=3; i++){
            for(ll j=0; j<n; j++){
                string x; cin >> x;
                m[x].push_back(i);
            }
        }

        vector<ll> p(4,0);
        for(auto pair : m){
            if((pair.second).size() == 1){
                p[pair.second[0]] += 3;
            }
            else if((pair.second).size() == 2){
                p[pair.second[0]]++; p[pair.second[1]]++;
            }
        }

        for(ll i=1; i<=3; i++){
            cout << p[i] << " ";
        }
        cout << endl;
        
    }   
    
    return 0;
}