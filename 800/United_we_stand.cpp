#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> r(n);
        int count = 0, mn = INT_MAX;
        unordered_map<int,int> mp;
        int odd = 0;
        int even = 0;
        vector<int> a;
        vector<int> b;
        for (int i =0; i < n ; ++i) {
            cin>>r[i];
            mp[r[i]]++;
            mn = min(mn, r[i]);
            if (r[i]%2)odd++;
            else even++;
        }
        if (mp.size() < 2) {
            cout<<-1;
        } else { 
            if (odd == 0 || even == 0) {
            int x = mp[mn];
            for (int i =0; i < x ; ++i) {
                a.push_back(mn);
            }
            mp.erase(mn);
            for (auto it : mp) {
                x = it.second;
                while(x--)
                b.push_back(it.first);
            }
        } else {
                    int x;
            for (auto it : mp) {
                if (it.first%2) {
                    x = it.second;
                    while(x--) a.push_back(it.first);
                } else {
                    x = it.second;
                    while(x--) b.push_back(it.first);
                }
            }
        }
        cout<<a.size()<<" "<<b.size()<<endl;
        for (auto x : a)cout<<x<<" ";
        cout<<endl;
        for (auto x : b)cout<<x<<" ";
        }
        cout<<endl; 
    }
    return 0;
}