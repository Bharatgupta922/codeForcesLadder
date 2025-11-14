#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a;
        for (int i = 0 ; i < n ; ++i) {
            int x;
            cin>>x;
            if (i && a.back() > x) {
                a.push_back(1);
            }
            a.push_back(x);
        }
        cout<<a.size()<<endl;
        for(auto x : a)
        cout<<x<<" ";
        cout<<endl; 
    }
    return 0;
}