#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        int xr;
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
                    if (i == 0)
            xr = a[i];
            else 
            xr^=a[i];
        }
        // for (int i =0; i < n ; ++i) {

        // }
        // cout<<xr<<"------------||||";
        bool flg = true;
        int ans;
        for (auto i = 0; i < n ; ++i) {
            a[i]^=xr;
            if (i == 0) ans = a[i];
            else ans ^= a[i];
        }
        ans == 0 ? cout<<xr : cout<<"-1";
        cout<<endl;
    }
    return 0;
}