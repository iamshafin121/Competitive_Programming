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
    vll a(n+1); a[0] = -1e18;
    for(ll i=1; i<=n; i++) cin >> a[i];
    vll b(m); cinv(b); srt(b);

    for(ll i=1; i<=n; i++){
        if(a[i] < a[i-1]){
            auto lb = lower_bound(b.begin(),b.end(),a[i]+a[i-1]);
            if(lb != b.end()){
                a[i] = (*lb) - a[i];
                if(a[i] < a[i-1]){
                    cout << "NO" << endl;
                    return;
                }
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
        else{
            auto lb = lower_bound(b.begin(),b.end(),a[i]+a[i-1]);
            if(lb != b.end()) a[i] = min(a[i],((*lb) - a[i]));
        }
    }
    cout << "YES" << endl;
    
}


int main(){
    
    fst
    tst
    solve();

    return 0;
}