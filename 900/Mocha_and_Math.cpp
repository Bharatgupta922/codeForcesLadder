#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        int mx = INT_MIN;
        for (int i =0 ; i < n ; ++i) {
            cin>>a[i];
            mx = max(mx, a[i]);
        }
        int mn = INT_MAX;
        for (int i =0; i < n ; ++i) {
            mn = min(mn, mn&a[i]);
        }
        cout<<mn;
        cout<<endl; 
    }
    return 0;
}