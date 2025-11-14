
#include<bits/stdc++.h>
using namespace std;
// #define int long long
int32_t main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin>>t;
    while(t--) {
       int n ;
       cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        s+=s;
        map<char, vector<int> > mp;
        for (int i = 0; i < 2*n; ++i) {
            mp[s[i]].push_back(i);
        }
        int ans = 0;
        for (auto x : mp[c]) {
            auto it = lower_bound(mp['g'].begin(), mp['g'].end(), x);
            if (it != mp['g'].end()) {
                ans = max(ans, *it-x);
            }
        }
        cout<<ans<<endl;
    //    cout<<endl;
    }
    return 0;
}