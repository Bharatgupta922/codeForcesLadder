#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
       int n, x ;
        cin>>n;
        vector<int> a(n);
        for (int i =1; i <= n ; ++i) {
            cin>>x;
            cout<<i;
            if (i!=n)
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}