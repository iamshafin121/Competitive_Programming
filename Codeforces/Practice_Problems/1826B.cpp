#include<bits/stdc++.h>	
#define ll long long int
using namespace std;


bool is_palindrome(vector<ll> &a){
	for(ll i=0,j=a.size()-1; i<j; i++,j--)
    	if(a[i] != a[j]) return false;
    return true; 
}

ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}


int main(){
    
    ll t; cin >> t;
    while(t--){
    
       ll n; cin >> n;
       vector<ll> a(n); for(auto &ele : a) cin >> ele;
       if(is_palindrome(a)){
       	cout << 0 << endl;
           continue;
       }
       vector<ll> maxi;
       for(ll i=0,j=n-1; i<j; i++,j--){
       	maxi.push_back(abs(a[i] - a[j]));
       }
       ll ans = maxi[0];
       for(auto ele : maxi){
       	ans = gcd(ans,ele);
       }
        	
       cout << ans << endl;
    }
    
    
    return 0;
}