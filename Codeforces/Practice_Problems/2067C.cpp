#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define vc vector
#define vi vc<int>
#define vll vc<ll>
#define endl '\n'
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define srt(x) sort(x.begin(),x.end())
#define rsrt(x) sort(x.rbegin(),x.rend())
#define rvs(v) reverse(v.begin(),v.end())
#define tst ll t; cin >> t; while(t--)
#define M 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define coutv(v) for(auto it:v) cout << it << ' '; cout << endl;
#define cinv(v) for(auto &it:v) cin >> it;
#define fst ios::sync_with_stdio(false);cin.tie(0);

bool is_cont(ll x){
    while(x){
        if(x%10 ==  7) return true;
        x /= 10;
    }
    return false;
}

void solve(){
    ll n; cin >> n;
    ll ans = 10;
    for(ll i=9; i<1e18; i*=10, i+=9){
        ll ct = 0;
        ll x = n;
        while(!is_cont(x)){
            x += i; ct++;
        }
        ans = min(ct,ans);
    }
    cout << ans << endl;
}


int main(){
    
    fst
    tst
    solve();
    
    return 0;
}