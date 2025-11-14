#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
       int k , n;
       cin>>n>>k;
        // if (n%2 == 0 || k%2) cout<<"YES";
        // else {
            //     bool flg = false;
            // while(n>=k) {
            //     n-=k;
            //     if (n%2 == 0) {
            //         cout<<"YES";
            //         flg = true;
            //         break;
            //     }
            // }
            // if (!flg) cout<<"NO";
            // if ((k%2!=0) && k <= n) cout<<"YES";
            // else cout<<"NO";
            bool flg = false;
            for (int i =0 ; i < 2; ++i) {
                if ((n-i*k) >= 0 && (n-i*k)%2 == 0) {
                    cout<<"YES";
                    flg = true;
                    break;
                }
            }
            if (!flg) cout<<"NO";


        // }
        cout<<endl;
    }
    return 0;
}