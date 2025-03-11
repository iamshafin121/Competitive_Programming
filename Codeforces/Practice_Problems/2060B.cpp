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
    ll n,m; cin >> n >> m;
    set<set<ll>> st;
    for(ll i=1; i<=n; i++){
        set<ll> temp; temp.insert((m*n)+i);
        for(ll j=1; j<=m; j++){
            ll x; cin >> x;
            temp.insert(x);
        }
        st.insert(temp);
    }

    vector<ll> cows;
    vector<vector<ll>> all;
    for(auto deck : st){
        vector<ll> temp;
        for(auto card : deck){
            if(card < (m*n)) temp.pb(card);
            else cows.pb(card-(m*n));
        }
        all.pb(temp);
    }
    
    bool flag = true;
    
    for(ll i=0; i<n; i++){
        for(ll j=1; j<m; j++){
            if((all[i][j-1] + n) != all[i][j]){
                flag = false; break;
            }
        }
    }

    if(flag){
        coutv(cows)
    }
    else{
        cout << -1  << endl;
    }
    
}


int main(){
    
    fst
    tst
    solve();
    
    return 0;
}

