#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int a, b;
        cin>>a>>b;
        if (a==b) {
            a == 1 ? cout<<"1" : cout<<"0";
        } else {
            cout<<b-a;
        }
        cout<<endl; 
    }
    return 0;
}