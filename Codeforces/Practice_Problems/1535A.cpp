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


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        vector<ll> p(4); for(auto &ele : p) cin >> ele;
        ll num_1 = 0, num_2 = 0;
        if(p[0] > p[1]) num_1 = p[0]; else num_1 = p[1];
        if(p[2] > p[3]) num_2 = p[2]; else num_2 = p[3];
        sort(p.begin(),p.end());
        set<ll> st; st.insert(p[2]); st.insert(p[3]);
        st.insert(num_1); st.insert(num_2);
        if(st.size() > 2) cout << "NO" << endl;
        else cout << "YES" << endl;

    }
    
    return 0;
}