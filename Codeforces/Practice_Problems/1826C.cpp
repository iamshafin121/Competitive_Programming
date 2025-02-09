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


void solve(){
    ll n, m; cin >> n >> m;
    if(n == 1 || m == 1) yes
    else if(m >= n) no
    else{
        if(n%2 == 0) no
        else{
            ll x = sqrt(n);
            for(ll i=2; i<=x; i++){
                if(n%i == 0){
                    if(m>=i){
                        no
                        return;
                    }
                }
            }
            yes
        }

    }
}


int main(){
    
    fst
    tst
    solve();
    
    return 0;
}