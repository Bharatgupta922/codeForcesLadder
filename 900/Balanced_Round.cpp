#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        int i =0;
            int j = i;
            int ans = 1;
        while(i<n) {
            j = i+1;
            while(j<n && abs(a[j]-a[j-1]) <= k)j++;
            if (i != j+1)
            ans = max(ans, j-i);
            i = j;
        }
        cout<<n-ans;
        cout<<endl;
    }
    return 0;
}