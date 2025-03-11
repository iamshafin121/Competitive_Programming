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
        ll n; cin >> n;
        vector<ll> a(n); for(auto &ele : a) cin >> ele;
        map<ll, ll> mp; 
        for(ll i=0; i<n; i++){
            mp[a[i]]++;
        }

        ll max_len = 0;
        ll left = -1;
        ll right = -1;
        bool distinct = false;
        ll r=0,l=0;
        while(r<n){
            if(mp[a[r]] == 1 && !distinct){
                distinct = true;
                l = r;
            }

            if(mp[a[r]] > 1 && distinct){
                distinct = false;
                if((r-l) > max_len){
                    left = l+1; right = r;
                }
                max_len = max(max_len, (r-l));
            }
            r++;
        }

        if(distinct){
            if((r-l) > max_len){
                left = l+1; right = r;
            }
            max_len = max(max_len, (r-l));
        }

        if(left != -1 && right != -1){
            cout << left << " " << right << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    
    return 0;
}