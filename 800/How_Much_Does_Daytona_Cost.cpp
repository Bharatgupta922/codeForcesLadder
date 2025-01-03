#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        bool found = false;
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
            if (a[i] == k) {
                found = true;
            }
        }
        found ? cout<<"YES":cout<<"NO";
        cout<<endl; 
    }
    return 0;
}