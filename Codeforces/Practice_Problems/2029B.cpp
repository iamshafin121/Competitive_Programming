#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s, r; cin >> s >> r;
        
        int j = s.size()-2;
        for(int i=0; i<n-1; i++){

            bool found = false;
            while(j>=0) {
                if(s[j] != s[j+1] && j+1 != s.size()){
                    found = true;
                    break;
                }
                j--;
            }

            if(found){
                if(s[j] == r[i]) s.pop_back();
                else if(s[j+1] == r[i]){
                    s[j] = s[j+1];
                    s.pop_back();
                    j--;
                }
            }
            else{
                break;
            }
            
        }

        if(s.size() > 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}