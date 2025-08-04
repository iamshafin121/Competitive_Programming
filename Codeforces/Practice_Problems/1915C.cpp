

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

/*
       _______ ___  ___ ____   ______ _______ __   ___
      /  ____//  / /  // _  | / ____//_  ___//  | /  /
     (___   )/  /_/  // /_| |/ /___   / /   /   |/  /
    ____/  //  __   // ___  / ____/__/ /__ /  | |  /
   /______//__/ /__//_/  |_/_/   /_______//__/| __/

*/

int main() {

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, sum = 0;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            sum += x;
        }

        ll sqrt_sum = sqrt(sum);

        if ((sqrt_sum * sqrt_sum) == sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
