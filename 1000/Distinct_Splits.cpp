
#include<bits/stdc++.h>
using namespace std;
int32_t main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin>>t;
    while(t--) {
       int n ;
       cin>>n;
       string s;
       cin>>s;
       vector<int> fq(26, 0);
       vector<int> another(26, 0);
       for (auto x : s) fq[x-'a']++;
       int ans = 0;
       int cnt;
       for (int i =0; i < n; ++i) {
        fq[s[i]-'a']--;
        another[s[i]-'a']++;
        cnt = 0;
        for (int j = 0; j < 26; ++j) {
            cnt += min(1, fq[j]) + min(1, another[j]);
        }
        ans = max(ans, cnt);
       }
       cout<<ans;
       cout<<endl;
    }
    return 0;
}