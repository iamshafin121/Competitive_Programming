#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        bool flag = false;
        if(s[0]=='1' || s[n-1]=='1'){
            flag = true;
        }
        else{
            for(int i=0; i<n-1; i++){
                if(s[i]=='1' && s[i+1]=='1') flag = true;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}

