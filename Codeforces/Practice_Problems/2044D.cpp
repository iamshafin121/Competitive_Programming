#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        
        set<int> a;
        set<int> b;

        for(int i=1; i<=n; i++){
            b.insert(i);
        }

        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            
            int a_size = a.size();
            a.insert(x);
            if(a_size < a.size()){
                cout << x << " ";
                b.erase(x);
            }
            else{
                set<int> :: iterator it = b.begin();
                cout << (*it) << " ";
                b.erase(*it);
                // a.insert(*it);
            }   
        }
        cout << endl;

    }
    
    return 0;
}