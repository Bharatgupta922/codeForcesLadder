#include<bits/stdc++.h>
using namespace std;
int main() {

    // int t ;
    // cin>>t;
    // while(t--) {
        int n , x;
        cin>>n;
        vector<int> a(n);
        int mn  = INT_MAX;
        for (int i =0; i < n ; ++i) {
            cin>>x;
            mn = min(mn, abs(x));
        }
        cout<<mn;
        cout<<endl; 
    // }
    return 0;
}