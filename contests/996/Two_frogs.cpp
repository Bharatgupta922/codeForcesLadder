#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n, a,b;
        cin>>n>>a>>b;
        n = abs(a-b) + 1;
        if (a < b) {
            a = 1;
            b = n;
        } else {
            a = n;
            b = 1;
        }
        if (n%2) {
            int mid = (n/2) + 1;
            (abs(mid - a) <= abs(mid - b)) ? cout<<"YES" : cout<<"NO";
        } else {
            int mid1 = n/2;
            int mid2 = (n/2) + 1;
            if ((a+1 == b) || (a == b+1)) cout<<"NO";
            else if (a < b) {
                (abs(a-mid1) < abs(mid2-b)) ? cout<<"YES" : cout<<"NO";
            } else {
                (abs(mid1 - b) > abs(mid2-a)) ? cout<<"YES" : cout<<"NO";
            }
        }
        cout<<endl; 
    }
    return 0;
}   