#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int a,b,c;
        cin>>a>>b>>c;
        if (a == b && b == c) {
            cout<<"Yes";
        } else if (a > (b+c+1)) {
            cout<<"Yes";
        } else {
            cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}