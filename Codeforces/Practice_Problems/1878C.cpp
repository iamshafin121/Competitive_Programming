#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    ll t; cin >> t;
    while(t--){
        
        ll n, k, x; cin >> n >> k >> x;
        ll total = ((n*(n+1))/2)-(((n-k)*((n-k)+1))/2); 
        ll total2 = (k*(k+1))/2;
        if(total < x || total2 > x){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    

    return 0;
}