
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin>>t;
    while(t--) {
       int n ;
       cin>>n;
    //    int lcm = INT_MAX;
    //    vector<int> ans(2, -1);
        int a = 1;
    for (int i = 2; i*i<=n; ++i)  {
        if (n%i == 0) {
            a = n/i;
            break;
        }
       }
       cout<<a<<" "<<n-a;
       cout<<endl;
    }
    return 0;
}