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

bool cmp(vll x, vll y){
    ll x_sum = 0, y_sum = 0;
    for(ll i=0; i<x.size(); i++){
        x_sum += x[i];
        y_sum += y[i];
    }
    return x_sum >= y_sum;
}

void solve(){
    ll n,m; cin >> n >> m;
    vc<vll> a(n,vll(m));
    vc<pair<ll,ll>> all_sum(n);
    for(ll i=0; i<n; i++){
        cinv(a[i]);
        ll sum = 0;
        for(auto x: a[i]){
            sum += x;
        }
        all_sum[i] = {sum,i};
    }
    rsrt(all_sum);

    ll total = 0;
    ll count = 0;

    for(auto pr : all_sum){
        for(auto ele : a[pr.second]){
            count += ele;
            total += count;
        }
    }
    cout << total << endl;
    
}


int main(){
    
    fst
    tst
    solve();
    
    return 0;
}