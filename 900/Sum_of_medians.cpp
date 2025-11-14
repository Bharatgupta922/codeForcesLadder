#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {
        int n , k;
        cin>>n>>k;
        vector<int> a(n*k);
        int rnd = 1;
        int ans = 0;
        for (auto &x : a)cin>>x;
        // if (n&1) {
        int x = 1;
        int count = 0;
        for (int i =n*k-1; i >= 0 ; --i) {
            if (x == (n/2+1)) {
                ans += a[i];
                x = 1;
                count++;
            } else {
                x++;
            }
            if (count == k) break;
        }

        // int med = n/2 + 1;
        // int rest = n/2;

        //     int ans = 0;
        //     while((n-(i*med)-1) >= 0) {
        //         ans += a[(n-(i*med))];
        //         med+=2
        //     }
        // } else {

        // int x = 1;
        // int count =0;
        // for (int i =n*k-1; i >= 0 ; --i) {
        //     if (x == (n/2+1)) {
        //         ans += a[i];
        //         x = 1;
        //         count++;
        //     } else {
        //         x++;
        //     }
        //     if (count == k) break;
        // }

            // int med = n/2+1;
            // int i = 1
            // while((n-(med*i)-1) >= 0) {
            //     ans += a[n-(i*med)-1];
            //     med += 3
            // }
        // }
        cout<<ans;
        cout<<endl;
    }
    return 0;
}