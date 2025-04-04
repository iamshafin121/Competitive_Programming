#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        int candy;
        cin >> candy;
        if (candy == 1) count1++;
        else count2++;
    }

    int totalWeight = count1 + 2 * count2;

    if (totalWeight % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    int halfWeight = totalWeight / 2;

    if (halfWeight % 2 == 0 || (halfWeight % 2 == 1 && count1 > 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
