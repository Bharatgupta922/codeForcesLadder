#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if (n&1 || n < 4) cout<<"-1";
        else cout<<(n+4)/6<<" "<<n/4;
        cout<<endl;
    }
    return 0;
}