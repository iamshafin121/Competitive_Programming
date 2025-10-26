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

        ll a, b;
        cin >> a >> b;
        ll xk, yk;
        cin >> xk >> yk;
        ll xq, yq;
        cin >> xq >> yq;

        map<pair<ll, ll>, ll> mp;
        if (a != b) {

            mp[{xk + a, yk + b}]++;
            mp[{xk + b, yk + a}]++;
            mp[{xk + b, yk - a}]++;
            mp[{xk + a, yk - b}]++;
            mp[{xk - a, yk - b}]++;
            mp[{xk - b, yk - a}]++;
            mp[{xk - b, yk + a}]++;
            mp[{xk - a, yk + b}]++;

            mp[{xq + a, yq + b}]++;
            mp[{xq + b, yq + a}]++;
            mp[{xq + b, yq - a}]++;
            mp[{xq + a, yq - b}]++;
            mp[{xq - a, yq - b}]++;
            mp[{xq - b, yq - a}]++;
            mp[{xq - b, yq + a}]++;
            mp[{xq - a, yq + b}]++;
        } else {

            mp[{xk + a, yk + b}]++;
            mp[{xk + b, yk - a}]++;
            mp[{xk - a, yk - b}]++;
            mp[{xk - b, yk + a}]++;

            mp[{xq + a, yq + b}]++;
            mp[{xq + b, yq - a}]++;
            mp[{xq - a, yq - b}]++;
            mp[{xq - b, yq + a}]++;
        }

        ll count = 0;

        for (auto it : mp) {
            if (it.second == 2) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
