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
    string s, t; cin >> s >> t;
    ll j = 0;
    for(ll i=0; i<s.size(); i++){
        if(j < t.size()){
            if(s[i] == t[j]) j++;
            else if(s[i] == '?'){
                s[i] = t[j]; j++;
            }
        }
        else if(s[i] == '?') s[i] = t[j-1];
    }

    if(j==t.size()){yes cout << s << endl;}
    else no
}


int main(){
    
    fst
    tst
    solve();

    return 0;
}