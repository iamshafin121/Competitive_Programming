#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;

        cout << 1 ;

        if(d%3==0 || n>2) cout << " " << 3;
        if(d==5) cout << " " << 5;
        if(d==7 || n>2) cout << " " << 7;
        if(d==9 || (d%3==0 && n>2) || n>=6) cout << " " << 9;
        cout << endl;

    }
    


    return 0;
}