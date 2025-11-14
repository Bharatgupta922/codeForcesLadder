
#include<bits/stdc++.h>
using namespace std;
// #define int long long
int32_t main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin>>t;
    while(t--) {
       string s;
       int n ;
       cin>>n>>s;
       
       int last_one = -1;

       for (int i =0; i<n; ++i) {
            if (s[i] == '1') {
                last_one = i;
                break;
            }
       }
       if (last_one == -1) {
           cout<<"0"<<endl;
              continue;
       }

       int count = 1;
       bool one_en = false;
       int last_zero = 0;
       for (int i = n-1; i >= last_one; --i) {
        if (s[i] == '1') {
            one_en = true;
        }
        if (one_en && s[i] == '0') {
            count+=2;
        } else if (!one_en && s[i] == '0' && last_zero ==0) {
            count++;
            last_zero = 1;
        }
       }
       cout<<count<<endl;
    //    for (int i = last_one; i < n ; ++i) {
    //     if (s[i] == '0') {
    //         count+=2;
    //     }
    //    }
    //    cout<<count<<endl;
    //    cout<<endl;
    }
    return 0;
}