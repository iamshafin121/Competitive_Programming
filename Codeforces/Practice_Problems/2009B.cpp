
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
        ll n;
        cin >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++) {
            for (ll j = 1; j <= 4; j++) {
                char c;
                cin >> c;
                if (c == '#') {
                    v.push_back(j);
                }
            }
        }
        reverse(v.begin(), v.end());

        for (auto ele : v) {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
}
