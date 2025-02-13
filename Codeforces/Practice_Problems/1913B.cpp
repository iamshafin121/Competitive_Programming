#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    long long int t; cin >> t;
    while(t--){
        string s; cin >> s;
        map<char,long long int> m;
        for(long long int i=0; i<s.size(); i++) m[s[i]]++;
        bool flag = true;
        for(long long int i=0; i<s.size(); i++){
            if(s[i] == '0'){
                if(m['1']) m['1']--;
                else{
                    cout << s.size()-i << endl;
                    flag = false;
                    break;
                }
            }
            else{
                if(m['0']) m['0']--;
                else{
                    cout << s.size()-i << endl;
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout << 0 << endl;
    }
    
    return 0;
}