#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    long long int n;
    cin >> n;

    if(n&1){
        cout << 0 << endl;
    }
    else{
        if(n%4 == 0){
            cout << (n/4) - 1 << endl;
        }
        else{
            cout << n/4 << endl;
        }
    }
    
    return 0;
}