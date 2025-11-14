#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
           vector<int> a(n);
           for (int i =0; i < n ; ++i)
           cin>>a[i];
        bool flg = true;
        int count = 0;
        for (int i = n - 1; i >= 1; --i) {
            while (a[i-1] >= a[i] && a[i-1]>0) {
                a[i-1] /= 2;
                count++;
                }
            // if (a[i]%2==0 && a[i-1] >= a[i])
            // {
            //     if (a[i]&2)
            //     {
            //         count += a[i-1]/(2*a[i]+1);
            //     a[i-1]/=(2*a[i]+1);
            //     }
            //     else {
            //         count += a[i-1]/(2*a[i]);
            //     a[i-1]/=(2*a[i]);
            //     } 
            // } 
            if (a[i-1] == a[i]) {
                flg = false;
                break;
            } 
            // else 
        }
        if (!flg) cout<<"-1";
        else cout<<count;
        cout<<endl;
    }
    return 0;
}