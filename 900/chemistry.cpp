#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n, a;
        string s;
        cin>>n>>a;
        cin>>s;
        unordered_map<int, int> mp;
        for (auto x : s) {
            mp[x-'a']++;
        }
        int oddCount = 0;
        for (auto x : mp) {
            if (x.second%2 != 0) 
            oddCount++;
        }
        (oddCount - a) > 1 ? cout<<"NO":cout<<"YES";
        cout<<endl; 
    }
    return 0;
}