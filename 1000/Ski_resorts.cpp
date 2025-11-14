
#include<bits/stdc++.h>
using namespace std;
// #define int long long
int countSubarrays(int N, int X) {
    if (N < X) return 0;
    if (N == X) return 1;
    return ((1LL * N * (N + 1LL)) - (1LL * (X - 1)* (2 * N - X )))/2;
}
int32_t main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin>>t;
    while(t--) {
       int n, k , q;
       cin>>n>>k>>q;
       vector<int> a(n);
       for (auto &i: a) cin>>i;
       int i =0;
       long long ans = 0;
       while(i<n) {
        if (a[i] > q) {
            i++ ;
            continue;
        }
        int j = i;
        while(j < n && a[j] <= q)  {
        
            j++;
            ans +=  max(0, ((j-i) - k + 1));
        }
            i = j;
       }
        cout<<ans;
       cout<<endl;
    }
    return 0;
}