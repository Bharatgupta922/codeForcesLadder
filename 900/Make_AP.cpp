#include<bits/stdc++.h>
using namespace std;
// #define int long long
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int a,b,c;
        cin>>a>>b>>c;
        bool ans = false;
        if ((((c+a)%(2*b)) == 0 && ((c+a)/(2*b)) > 0) || ((((2*b)-a)/c) > 0 && (((2*b)-a)%c) == 0) || ((((2*b)-c)/a) > 0 && (((2*b)-c)%a) == 0))
        cout<<"YES";
    else cout<<"NO";
        cout<<endl;
    }
    return 0;
}