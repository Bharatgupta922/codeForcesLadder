#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n , k;
        cin>>n>>k;
        if (n%k) {
            cout<<"1"<<endl<<n;
        } else {
            cout<<"2"<<endl<<n-1<<" "<<1;
        }
        cout<<endl; 
    }
    return 0;
}