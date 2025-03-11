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
    vll a(n); cinv(a);
    vll even, odd;
    for(auto x : a){
        if(x&1) odd.pb(x);
        else even.pb(x);
    }

    if(even.size() == 0 || odd.size() == 0){
        cout << 0 << endl;
        return;
    }

    sort(even.begin(),even.end());
    ll odd_max = *max_element(odd.begin(),odd.end());

    ll count1 = 0;
    for(ll i=0; i<even.size(); i++){
        if(odd_max < even[i]){
            count1 += 2;
            odd_max += (even[i]*2);
        }
        else{
            odd_max += even[i];
            count1++;
        }
    }

    ll count2 = 0;
    odd_max = *max_element(odd.begin(),odd.end());
    reverse(even.begin(), even.end());
    for(ll i=0; i<even.size(); i++){
        if(odd_max < even[i]){
            count2 += 2;
            odd_max += (even[i]*2);
        }
        else{
            odd_max += even[i];
            count2++;
        }
    }

    cout << min(count1,count2) << endl;


}


int main(){
    
    fst
    tst
    solve();
    
    return 0;
}