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
        for (int i = 0 ; i < n ; ++i) {
            cin>>a[i];
            if (a[i]&1) odd++;
            else even++;
        }
        if (even == 0) {
            cout<<n/2;
        } else if (odd == 0) {
            cout<<"1";
        } else {
            int common = min(odd, even);
            odd -= common;
            even -= common;
            int ans = 2*common;
            if (odd > even) {
                ans += odd;
            } 
            cout<<ans;
        }
        cout<<endl; 
    }
    return 0;
}