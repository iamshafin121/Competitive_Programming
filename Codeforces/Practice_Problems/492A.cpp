#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int height = 0, usedCubes = 0, level = 1;

    while (usedCubes + (level * (level + 1)) / 2 <= n) {
        usedCubes += (level * (level + 1)) / 2;
        height++;
        level++;
    }

    cout << height << endl;
    return 0;
}
