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
        cin >> n >> k;

        set<int> s;

        if(n==1){
            cout << 1 << endl;
            cout << 1 << endl;
        }
        else if(k!=1 && k!=n){
            if(k%2 == 0){
                s.insert(1);
                s.insert(k);
                s.insert(k+1);
            }
            else{
                s.insert(1);
                s.insert(k-1);
                s.insert(k);
                s.insert(k+1);
                s.insert(n);
            }
            cout << s.size() << endl;
            for(auto x : s){
                cout << x << " ";
            }
            cout << endl;

        }
        else{
            cout << -1 << endl;
        }

        
    }
    
    return 0;
}