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
    vll b(n-1); cinv(b);
    vc<vll> a(n,vll(30,0));
    for(ll i=0; i<1; i++){
        for(ll j=0; j<30; j++){
            if(b[i] & (1 << j)){
                a[i][j] = 1;
                a[i+1][j] = 1;
            }
        }
    }


    for(ll i=1; i<n-1; i++){
        for(ll j=0; j<30; j++){
            if(b[i] & (1 << j)){
                if(a[i][j] == -1){
                    cout << -1 << endl;
                    return;
                }
                a[i][j] = 1;
                a[i+1][j] = 1;
            }
        }

        for(ll j=0; j<30; j++){
            if(a[i][j] == 1 && a[i+1][j] != 1){
                a[i+1][j] = -1;
            }
        }
    }

    for(ll i=0; i<n; i++){
        ll num = 0;
        for(ll j=0; j<30; j++){
            if(a[i][j] == 1){
                num |= (1 << j);
            }
        }
        cout << num << ' ';
    }
    cout << endl;
    
}


int main(){
    
    fst
    tst
    solve();
    
    return 0;
}