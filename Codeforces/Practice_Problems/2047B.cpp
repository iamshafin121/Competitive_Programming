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
    ll n; cin >> n;
    string s; cin >> s;
    map<char,ll> m;
    for(ll i=0; i<s.size(); i++){
        m[s[i]]++;
    }
    vc<pair<ll,char>> v;
    for(auto ele : m){
        v.pb({ele.second,ele.first});
    }
    srt(v);
    s[s.find(v[0].second)] = v[v.size()-1].second;
    cout << s << endl;
}


int main(){
    
    fst
    tst
    solve();
    
    return 0;
}