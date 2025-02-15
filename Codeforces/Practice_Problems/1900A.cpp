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
        ll consicutive = 0;
        ll count = 0; bool flag = false;
        for(ll i=0; i<s.size(); i++){
            if(s[i] == '.'){
                consicutive++;
                count++;
                if(consicutive == 3){
                    flag = true; break;
                }
            }   
            else{
                consicutive = 0;
            }
        }

        if(flag) cout << 2 << endl;
        else cout << count << endl;
    }
    
    
    return 0;
}