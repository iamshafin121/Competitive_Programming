#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void generate(string &str, ll four, ll seven, vector<string> &valid){
    if(four == 0 && seven == 0) valid.push_back(str);
    
    if(four > 0){
        str.push_back('4');
        generate(str,four-1,seven,valid);
        str.pop_back();
    }

    if(seven > 0){
        str.push_back('7');
        generate(str,four,seven-1,valid);
        str.pop_back();
    }

}


int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout.tie(NULL);
    

    vector<string> valid;
    for(ll i=1; i<=5; i++){
        string x = "";
        generate(x,i,i,valid);
    }


    vector<ll> Lucky;
    for(auto str : valid){
        ll num = 0;
        for(auto ch : str){
            ll digit = ch - '0';
            num *= 10;
            num += digit;
        }
        Lucky.push_back(num);
    }


    ll n; cin >> n;
    cout << (*lower_bound(Lucky.begin(),Lucky.end(),n)) << endl;
    
    return 0;
}