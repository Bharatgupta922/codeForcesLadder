#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n ;
        cin>>n;
        int k;
        cin>>k;
        vector<int> a(n);
        for (int i =0; i < n ; ++i)
        cin>>a[i];
    bool flg = true;
    for (int i =0 ; i < n ; ++i) {
        flg = false;
        for (int j = 0 ; j  < n; ++j) {
            if (i!= j && abs(a[i]-a[j])%k == 0){
                flg = true;
                break;
            }
        }
        if (!flg) {
            cout<<"YES"<<endl<<i+1;
            break;
        }
    }
    if (flg) cout<<"NO";
    cout<<endl;
    }
    return 0;
}