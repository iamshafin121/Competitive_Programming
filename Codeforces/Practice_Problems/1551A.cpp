#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n;
    cin >> n;
    ll b = n/3, a = n/3;
    
    
    if(n%3 == 1) a++;
    else if(n%3 == 2) b++;
    
    cout << a << " " << b << endl;
    
    
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
    