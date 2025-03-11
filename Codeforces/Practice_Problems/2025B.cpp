#include<bits/stdc++.h>
using namespace std;

const long long int M = 1e9+7;

long long int solve(int exp) {
    long long int base = 2;
    long long int result = 1;

    while(exp) {
        if (exp&1) result = (result * base) % M;
        base = (base * base) % M;
        exp /= 2;
    }
    return result;
}


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> n;
    vector<int> k;
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        n.push_back(x);
    }

    for(int i=0; i<t; i++){
        int x; cin >> x;
        k.push_back(x);
    }

    for(int i=0; i<t; i++){
        cout << solve(k[i]) << endl;
    }
    
    return 0;
}