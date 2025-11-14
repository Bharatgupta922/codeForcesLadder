#include<bits/stdc++.h>
using namespace std;
// #define int long long
int32_t main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin>>t;
    while(t--) {
       int x , y;
       cin>>x>>y;
       if (x+1 == y || (x%9 == 0 && y == 1) || (x-y == 8)) {
        cout<<"Yes";
       } else {
        cout<<"No";
       }
       cout<<endl;
    }
    return 0;
}