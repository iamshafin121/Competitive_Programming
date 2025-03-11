#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n  >> k;

        if((n%2 == 0 && k%2 != 0) || (n%2 != 0 && k%2 == 0)){
            cout << "NO" << endl;
        }
        else{
             if(k <= sqrt(n)){
                cout << "YES" << endl;
             }
             else{
                cout << "NO" << endl;
             }
        }

    }

    return 0;
}