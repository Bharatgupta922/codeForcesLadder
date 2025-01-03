#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n , m;
        cin>>n>>m;
        vector<string> ip(n);
        for (int i =0; i < n ; ++i)
        cin>>ip[i];
        int len = 0;
        int count = 0;
        for(auto x: ip ) {
            if ((len + x.length()) <= m) {
                len += x.length();
                count++;
            } else {
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}