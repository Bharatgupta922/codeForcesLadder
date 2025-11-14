#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        int count = 0;
        vector<int> a(n);
        unordered_map<int, int> mp;
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
            if (mp[k-a[i]]) {
                count++;
                mp[k-a[i]]--;
            } else {
                mp[a[i]]++;
            }
        }
        cout<<count;
        
        cout<<endl; 
    }
    return 0;
}