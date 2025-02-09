#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int a1, a2, a4, a5; cin >> a1 >> a2 >> a4 >> a5;
        int one = a1 + a2;
        int two = a4 - a2;
        int three = a5 - a4;

        if(one == two && two == three) cout << 3 << endl;
        else if(one == two || two == three || one == three) cout << 2 << endl;
        else cout << 1 << endl;
    }
    
    return 0;
}