#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    vector<ll> num = {9,8,7,6,5,4,3,2,1};

    ll t; cin >> t;
    while(t--){
        ll s; cin >> s;
        set<ll> digit;
        ll sum = 0;
        for(ll i=0; i<num.size(); i++){
            if((sum+num[i]) <= s){
                digit.insert(num[i]);
                sum += num[i];
            }
        }

        for(auto ele : digit){
            cout << ele;
        }
        cout << endl;
    }
    
    
    
    return 0;
}