#include <bits/stdc++.h>
using namespace std;

bool isSuspicious(string s) {
    unordered_set<char> seen;
    char last = s[0];
    seen.insert(last);
    
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != last) {
            if (seen.count(s[i])) {
                return true; // Suspicious behavior detected
            }
            seen.insert(s[i]);
            last = s[i];
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        cout << (isSuspicious(s) ? "NO" : "YES") << "\n";
    }
    
    return 0;
}
