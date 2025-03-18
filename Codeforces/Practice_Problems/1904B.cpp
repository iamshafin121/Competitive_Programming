#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    ll t; cin >> t;
    while(t--){
    
    	ll n; cin >> n;
        vector<ll> a(n+1,0);
        vector<ll> srt(n+1,0);
        vector<ll> pre(n+1,0);
        for(ll i=1; i<=n; i++){
        	ll x; cin >> x;
            a[i] = x;
            srt[i] = x;
        }
        
        sort(srt.begin(),srt.end());
        for(ll i=1; i<=n; i++){
        	pre[i] = pre[i-1] + srt[i];
        }
        
        vector<ll> ans(n+1,0);
        ans[0] = -1;
        for(ll i=1; i<=n; i++){
        	ans[i] = i-1;
            ll j = i+1;
            if(ans[i] > ans[i-1]){
           	 while(pre[i] >= srt[j] && j<=n){
            		ans[i]++; pre[i] = pre[j]; j++;
            	}
            } 
            else{
            	ans[i] = ans[i-1];
            }
               
        }
        
        for(ll i=1; i<=n; i++){
        	ll idx = lower_bound(srt.begin(),srt.end(),a[i]) - srt.begin();
            cout << ans[idx] << " ";
        }
        cout << endl;
        
    }
    
    
    return 0;
}