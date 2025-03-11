#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        long long int m, a, b, c;
        cin >> m >> a >> b >> c;

        long long int total = 0;
        long long int space = 0;

        if(a>=m){
            total += m;
        }
        else{
            total += a;
            space += (m-a);
        }

        if(b>=m){
            total += m;
        }
        else{
            total += b;
            space += (m-b);
        }

        if(c>=space){
            total += space;
        }
        else{
            total += c;
        }


        cout << total << endl;


    }
    
    return 0;
}