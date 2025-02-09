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
    vll a(n); cinv(a); srt(a);
    ll l = 0, r = 0, sum = 0, maxi = INT_MIN;
    while(r < n && l < n){
        ll diff = a[r] - a[l];
        if(sum+a[r] <= m && diff <= 1){
            sum += a[r]; r++;
            maxi = max(maxi,sum);
        }
        else{
            sum -= a[l]; l++;
        }
    }
    cout << ((maxi < 0) ? 0 : maxi) << endl;
}


int main(){
    
    fst
    tst
    solve();
    
    return 0;
}
