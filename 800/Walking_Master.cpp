#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {
        int a,b,c,d;
        cin>>c>>d>>a>>b;
        // int p  = a-c;
        // int q = b-d;
        if (c < (a-(b-d))) {
            cout<<"-1";
        }
        //  else if (p > q) {
        //     cout<<"-1";
        // } 
        else {
            int m = b-d;
            int ans = 0;
            ans += m;
            ans += (c - (a-m));
            cout<<ans;
        }
        cout<<endl;
    }
    return 0;
}