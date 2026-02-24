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

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, d; cin >> n >> d;
    vector<ll> v(n); for(auto &ele: v) cin >> ele;
    sort(v.begin(),v.end());
    
    ll count_team = 0, count_player = 0, i = n-1;
    while(count_player < n && i >= 0){
            count_player += (d/v[i]) + 1;
            if(!(count_player > n)) count_team++;
            i--;
    }
    
    cout << count_team << endl;
    
    return 0;
}
