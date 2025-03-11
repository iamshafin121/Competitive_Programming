#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }

        set<int> x;
        for(int i=0; i<n-1; i++){
            int count = i;
            for(int j=i; j<n; j++){
                if(v[i] < v[j]) count++;
            }
            x.insert(count);
        }

        if(x.empty()) cout << 0 << endl;
        else cout << (*x.begin()) << endl;

    }
    
    return 0;
}