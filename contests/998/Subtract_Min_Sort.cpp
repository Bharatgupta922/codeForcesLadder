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
        bool sorted = true;
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
        }
        int ans = true;
        int diff = INT_MIN;
        int last ;
        for (int i =0; i < n; i+=2) {
                diff = a[i+1]-a[i];
            if (diff < 0) {
                ans = false;
                break;
            }
            if (i == 0) {
                int mn = min(a[i], a[i+1]);
                a[i] -= mn;
                a[i+1] -= mn;
                last = a[i+1];
            } else {
                int initial = a[i];
                int mn = min(a[i], a[i+1]);
                while(a[i] > last) {
                    a[i]-=mn;
                }
                if (a[i] < last) a[i]*=last;
                int nowDif = initial - a[i];
                if (a[i] > last) {
                    ans = false;
                    cout<<a[i];
                    break;
                } else {
                    last = a[i+1];
                }
            }
        }
        if (ans) cout<<"YES";
        else cout<<"NO";
        cout<<endl; 
    }
    return 0;
}