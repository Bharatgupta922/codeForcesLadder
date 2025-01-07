#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
       int n ;
        cin>>n;
        vector<int> a(n);
        bool isSorted = true;
        int minDiff = INT_MAX;
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
            if (i!=0 && a[i] < a[i-1]) {
            isSorted = false;
            }
            if (i!=0)
            minDiff = min(minDiff, a[i]-a[i-1]);
            // if (i > 1) {
            //     minDiff = min (minDiff, a[i]-a[i-1]);
            // }
        }
        if (isSorted) {
            cout<<(minDiff/2)+1;
        } else {
            cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}