#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    
    ll t; cin >> t;
    while(t--){
    	ll h, m; cin >> h >> m;
        cout << (abs((h++)-24)*60)+(60-m)-60 << endl;
    }
    
    
    return 0;
}