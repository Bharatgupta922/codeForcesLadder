#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        int count = 0;
        bool isSorted = true;
        for (int i =0; i < n ; ++i) {
            cin>>v[i];
            if (i != 0 && v[i] < v[i-1])
            isSorted = false;
        }

        k == 1 ? isSorted ? cout<<"YES" : cout<<"NO" : cout<<"YES" ;

        cout<<endl; 
    }
    return 0;
}