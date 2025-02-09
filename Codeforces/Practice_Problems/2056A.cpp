#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        long long int perimeter = 0;
        int attempt = false;
        while(n--){
            int x, y; cin >> x >> y;
            perimeter += 4*m;
            if(attempt){
                x = (m-x)*2;
                y = (m-y)*2;
                perimeter -= (x+y);
                
            }
            attempt = true;
        }

        cout << perimeter << endl;
    }
    
    return 0;
}
