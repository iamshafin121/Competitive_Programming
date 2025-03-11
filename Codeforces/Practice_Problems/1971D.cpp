#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;

        bool zero_one = true;
        int count = 1;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='0' && s[i+1]=='1'){
                if(zero_one){
                    zero_one = false;
                    continue;
                }
                count++;
            }
            else if(s[i]=='1' && s[i+1]=='0'){
                count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}