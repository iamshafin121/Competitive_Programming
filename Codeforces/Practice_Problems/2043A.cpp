#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.);tie(NULL
    cout.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        long long int n;
        cin >> n;
        cin.ignore();
        long long int count = 1;
        if(n>3){
            while(n>3){
                count = count * 2;
                n /= 4;
            }
        }

        cout << count << endl;

    }
    
    return 0;
}