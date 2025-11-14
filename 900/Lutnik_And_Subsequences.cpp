#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {
       int n;
       cin>>n;
       int z  = 0,o  = 0;
       for (auto i = 0 ; i < n ; ++i)
       {
        int x;cin>>x;
        if (x==0)z++;
        if(x==1)o++;
       }    
       if (o == 1 && z > 1) cout<<o+z*o+1;
       else
       cout<<o + z*o;
        cout<<endl;
    }
    return 0;
}