#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        int mn = 0, mx = 0; 
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
            if (a[mn] > a[i])
            mn = i;
            if (a[mx] < a[i])
            mx = i;
        }
        if (mx != n-1 && mn != 0) {
            int ans;
            if (mx!=n-1)
            ans = a[mx]-a[mx+1];
            else INT_MIN;
            for (int i = 1; i < n ; ++i)
            ans = max(ans, a[i-1]-a[i]);
            cout<<max({a[mx]-a[0], a[n-1]-a[mn], ans});
        } else cout<<a[mx]-a[mn];
        // cout<<
        // if (mx != n-1) {
            // a[mx+1] < a[0] ? cout<<a[mx]-a[mx+1] : cout<<a[mx]-a[0];
            //  cout<<max({a[mx]-a[0] , a[n-1]-a[mn], a[mx]-a[mx+1]});
        // } else {
        //     int ans = INT_MIN;
        //     for (int i =0; i  <n -1; ++i) 
        //     {
        //         ans = max(ans, a[i]-a[i+1]);
        //     }
        //     ans = max(ans, a[n-1]-a[0]);
            // cout<<ans;
            
        cout<<endl;
    }
    return 0;
}