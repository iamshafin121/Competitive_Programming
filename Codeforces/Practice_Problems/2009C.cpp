#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
int main(){
 
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll x, y, k; cin >> x >> y >> k;
 
        if(x > y){
            cout << max((((x+(k-1))/k)*2)-1,(((x+(k-1))/k)+((y+(k-1))/k))) << endl;
        }
        else{
            cout << (((y+k-1)/k)*2) << endl;
 
        }
 
    }
 
    return 0;
}