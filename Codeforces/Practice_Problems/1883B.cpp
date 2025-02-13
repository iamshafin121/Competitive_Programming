#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    
    long long int t; cin >> t;
    while(t--){
        long long int n, k; cin >> n >> k;
        string s; cin >> s;
        map<char,long long int> m;
        for(long long int i=0; i<s.size(); i++) m[s[i]]++;

        long long int num;
        if((n-k)&1) num = (n-k) - 1;
        else num = (n-k);

        long long int need = 0;
        for(auto ele : m){
            need += (ele.second/2)*2;
        }

        if(need >= num) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}