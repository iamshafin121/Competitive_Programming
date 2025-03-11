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
        vector<int> v;
        long long int sum = 0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v.push_back(x);
            sum += x;
        }

        if(sum%n != 0){
            cout << "NO" << endl;
        }
        else{
            int make_number = sum/n;
            for(int i=1; i<n-1; i++){
                int modifier_number = abs(v[i-1]-make_number);
                if((v[i-1] + modifier_number) == make_number){
                    v[i-1] += modifier_number;
                    v[i+1] -= modifier_number;
                }
                else if((v[i-1] - modifier_number) == make_number){
                    v[i-1] -= modifier_number;
                    v[i+1] += modifier_number;
                }
            }

            bool flag = true;

            for(int i=n-1; i>=0; i--){
                if(v[i] != make_number){
                    flag = false;
                    break;
                }
            }

            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    
    return 0;
}

