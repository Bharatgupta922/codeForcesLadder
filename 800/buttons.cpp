#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int ana = 0, kat = 0;
        ana += (c%2 == 0) ? (c/2) : ((c/2) + 1);
        kat += c/2;
        ana += a;
        kat += b;
        ana > kat ? cout<<"First" : cout<<"Second"; 
        cout<<endl; 
    }
    return 0;
}