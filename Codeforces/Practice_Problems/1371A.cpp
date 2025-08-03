
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
        if (n % 2) {
            cout << (n / 2) + 1 << endl;
        } else {
            cout << (n / 2) << endl;
        }
    }

    return 0;
}
