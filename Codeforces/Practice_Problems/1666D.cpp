#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    ll t; cin >> t;
    while(t--){
    	string s, x; cin >> s >> x;
        map<char,ll> mps, mpx;
        for(auto ch : s) mps[ch]++;
        for(auto ch : x) mpx[ch]++;
        ll j = 0;
        for(ll i=0; i<s.size() && j<x.size(); i++){
        	if(s[i] == x[j]){
            	if(mps[s[i]] < mpx[x[j]]){
                	break;
                }
                
                if(mps[s[i]] == mpx[x[j]]){
                	mpx[x[j]]--; j++;
                }
                
            }
            mps[s[i]]--;
        }
        
        if(j == x.size()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    
    return 0;
}