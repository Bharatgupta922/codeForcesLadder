#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
       int n, x ;
        cin>>n;
        vector<int> a(n);
        int cur = 0, mx = 0;
        for (int i =1; i <= n ; ++i) {
            cin>>x;
            if (x == 0) cur++;
            if (x == 1) {
                mx = max(mx, cur);
                cur = 0;
            }
        }
        cout<<max(cur, mx);
        cout<<endl;
    }
    return 0;
}