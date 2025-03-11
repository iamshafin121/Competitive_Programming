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
    string a, b; cin >> a >> b;
    ll count = 0;
    for(ll i=1; i<n-1; i++){
        if(a[i] == '.')
            if(b[i-1] != '.' && b[i+1] != '.')
                if(a[i-1] != 'x' && a[i+1] != 'x')
                    if(b[i] != 'x')
                        count++;

        if(b[i] == '.')
            if(a[i-1] != '.' && a[i+1] != '.') 
                if(b[i-1] != 'x' && b[i+1] != 'x')
                    if(a[i] != 'x') 
                        count++;
        
    }

    cout << count << endl;
}


int main(){
    
    fst
    tst
    solve();
    
    return 0;
}