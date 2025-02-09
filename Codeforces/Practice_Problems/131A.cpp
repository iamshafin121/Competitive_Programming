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
    string s; cin >> s;
    ll low = 0, high = 0;
    for(ll i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z')low++;
        else high++;
    }

    if(low == 0){
        for(ll i=0; i<s.size(); i++){
            s[i] += 32;
        }
    }
    else {
        if(s[0] >= 'a' && s[0] <= 'z'){
            if(low == 1){
                s[0] -= 32;
                for(ll i=1; i<s.size(); i++){
                    if(s[i] >= 'A' && s[i] <= 'Z'){
                        s[i] += 32;
                    }
                }
            }
        }
    }

    cout << s << endl;
}


int main(){
    
    fst
    // tst
    solve();
    
    return 0;
}