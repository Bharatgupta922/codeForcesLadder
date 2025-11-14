#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n, q ;
        cin>>n>>q;
        vector<int> a(n);
        vector<int> prefix(n);
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
            if (i == 0)
            prefix[0] = a[i];
        else prefix[i] = a[i]+prefix[i-1];
        }
        int l, r, k;
        for (int i =0; i < q; ++i) {
            cin>>l>>r>>k;
            (prefix[n-1]-prefix[r-1]-(l == 1 ? 0 : prefix[l-2])+(r-l+1)*k)%2 ? cout<<"YES": cout<<"NO";
            cout<<endl;
        }
        // cout<<endl;
    }
    return 0;
}