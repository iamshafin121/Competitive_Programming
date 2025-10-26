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

        ll n, a, b, result = 0;
        cin >> n >> a >> b;
        if (a * 2 > b) {
            if (n & 1) {
                result = ((n / 2) * b) + a;
            } else {
                result = (n / 2) * b;
            }
        } else {
            result = n * a;
        }

        cout << result << endl;
    }

    return 0;
}
