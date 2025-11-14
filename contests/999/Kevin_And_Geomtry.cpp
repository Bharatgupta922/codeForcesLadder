#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        int odd = 0, even = 0;
        unordered_map<int> mp;
        for (int i = 0 ; i < n ; ++i) {
            cin>>a[i];
            mp[a[i]]++;
        }
        for (auto x : mp) {
            if (x.second >= 2) {
                for (auto x : a)
                if (x > 2*x.second) {
                flg = true;
                oneSide = x;
                secondSide = 
                break;
                }
                if (flg) break;
            }
        }
        if (flg) 
        cout<<endl; 
    }
    return 0;
}