#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

    ll t;
    cin >> t;
    while (t--) {
        ll n, num;
        cin >> n;
        map<ll, ll> mp;
        bool is_found = false;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            mp[x]++;
            if (mp[x] >= 3 && !is_found) {
                is_found = true;
                num = x;
            }
        }
        if (!is_found) {
            cout << -1 << endl;
        } else {
            cout << num << endl;
        }
    }

    return 0;
}
