#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        int bandages = 0;
        int my_helth = m;
        int moves = 1;
        while(n>0){
            int x = 1;
            if(moves%3 == 0) x = 2;
            if(my_helth - k > 0 || ((n-x) < 1)){
                n -= x;
                my_helth -= k;
                moves++;
            }
            else{
                my_helth = m;
                bandages++;
            }
        }
        cout << bandages << endl;
    }
    
    return 0;
}