
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {
       int n;
       cin>>n;
       vector<int> a(n);
       vector<int> b(n);
       for (auto &x : a)
       cin>>x;
       for (auto &x : b)
       cin>>x;
    bool flg = false;
       unordered_map<int, int> mp;
       for (int i =0; i < n ; ++i) {
        for (int j =0; j < n ; ++j) {
            mp[a[i]+b[j]]++;
            if (mp.size() >= 3) {
                flg = true;
                break;
            }
        }
        if (flg) break;
       }
       if (flg) cout<<"YES";
       else cout<<"NO";
        cout<<endl;
    }
    return 0;
}