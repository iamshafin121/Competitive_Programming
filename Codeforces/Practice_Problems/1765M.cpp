#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

    ll t;
    cin >> t;
    map<ll, pair<ll, ll>> mp;
    while (t--) {
        ll n;
        cin >> n;
        if (n & 1) {
            cout << (((n / 2) == 1) ? 1 : (n / 2) - 1) << " "
                 << (((n / 2) == 1) ? 2 : (n / 2) + 2) << endl;
        } else {
            cout << n / 2 << " " << n / 2 << endl;
        }
    }

    return 0;
}
