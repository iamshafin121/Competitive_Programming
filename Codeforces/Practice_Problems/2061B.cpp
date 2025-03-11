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


int main(){

    ios_base::sync_with_stdio(false);
    
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n; 
        vll a(n); cinv(a); srt(a);
        ll x; bool flag = false;
        for(ll i=0; i<n-1; i++){
            if(a[i] == a[i+1]){
                x = a[i];
                a.erase(a.begin()+i,a.begin()+i+2);
                flag = true;
                break;
            }
        }
        
        if(!flag){ cout << -1 << endl; continue;}
        ll y, z; flag = false; n -= 2;
        for(ll i=0; i<n-1; i++){
            if((2*x) > abs(a[i+1] - a[i])){
                y = a[i]; z = a[i+1];
                flag = true; break;
            }
        }

        if(flag) cout << x << " " << x << " " << y << " " << z << endl;
        else cout << -1 << endl;
        


    }   
    
    return 0;
}