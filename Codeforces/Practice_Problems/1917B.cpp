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
        string s; cin >> s;
        set<char> st;
        ll count = 0;
        for(ll i=0; i<s.size(); i++){
            ll st_size = st.size();
            st.insert(s[i]);
            if(st_size != st.size()){
                count += (n-i);
            }
        }
        cout << count << endl;
    }
    
    return 0;
}