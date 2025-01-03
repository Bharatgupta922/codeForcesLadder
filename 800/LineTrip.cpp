#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        int count = 0;
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
        }
        int mx = a[0];
        for (int i = 1 ; i < n ; ++i) {
            mx = max(a[i] - a[i-1], mx);
        }
        mx = max(mx , 2*(k-a[n-1]));
        cout<<mx;
        cout<<endl; 
    }
    return 0;
}