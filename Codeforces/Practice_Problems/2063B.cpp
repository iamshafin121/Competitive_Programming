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
    ll n, l, r; cin >> n >> l >> r;
    vll a(n); cinv(a);
    multiset<ll> left,right;
    for(ll i=0; i<r; i++) left.insert(a[i]);
    for(ll i=l-1; i<n; i++) right.insert(a[i]);

    ll idx = r-l+1;
    ll sum_left = 0, sum_right = 0;

    for(auto x: left){
        if(idx == 0) break;
        sum_left += x;
        idx--;
    }

    idx = r-l+1;
    for(auto x: right){
        if(idx == 0) break;
        sum_right += x;
        idx--;
    }


    cout << min(sum_left,sum_right) << endl;

    
}


int main(){
    
    fst
    tst
    solve();
    
    return 0;
}