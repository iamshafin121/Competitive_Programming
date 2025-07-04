#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

    ll t;
    cin >> t;
    while (t--) {
        string s = "";
        for (ll i = 0; i < 64; i++) {
            char x;
            cin >> x;
            if (x != '.') {
                s += x;
            }
        }
        cout << s << endl;
        ;
    }

    return 0;
}
