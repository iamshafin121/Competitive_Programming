    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int


    /*
        _______ ___  ___ ____   ______ _______ __   ___
        /  ____//  / /  // _  | / ____//_  ___//  | /  /
        (___   )/  /_/  // /_| |/ /___   / /   /   |/  /
        ____/  //  __   // ___  / ____/__/ /__ /  | |  /
    /______//__/ /__//_/  |_/_/   /_______//__/| __/
                                                    
    */


    int main(){

        ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
        cout.tie(NULL);
        
        ll t; cin >> t;
        while(t--){
            ll n; cin >> n;
            map<ll,ll> a;
            for(ll i=0; i<n; i++){
                ll x; cin >> x;
                a[x]++;
            }
            if(a.size() <= 2){
                auto ele1 = a.begin();
                auto ele2 = --a.end();
                ll first_ct = (*ele1).second;
                ll second_ct = (*ele2).second;
                if(abs(first_ct - second_ct) > 1){
                    cout << "No" << endl;
                }
                else{
                    cout << "Yes" << endl;
                }
            }
            else{
                cout << "No" << endl;
            }
        }
        
        return 0;
    }