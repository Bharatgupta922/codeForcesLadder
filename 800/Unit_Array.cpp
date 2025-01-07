#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
       int n ;
        cin>>n;
        vector<int> a(n);
        int minus = 0, plus = 0, sum = 0;
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
            sum += a[i];
            if (a[i] == -1) minus++;
            else plus++;
        }
        if (n == 1) {
            plus ? cout<<"0" : cout<<"1";
        } else {
            if (minus <= (n/2) && minus%2 == 0) {
                cout<<"0";
            } else if (minus > (n/2) && minus%2 == 0) {
                int cnt = minus-(n/2);
                minus = (n/2);
                if (minus%2)
                cout<<cnt+1;
                else cout<<cnt;
            } else if (minus <= (n/2) && minus%2 != 0) {
                cout<<"1";
            } else if (minus > (n/2) && minus%2 != 0) {
                int cnt = minus-(n/2);
                minus = (n/2);
                if (minus%2)
                cout<<cnt+1;
                else cout<<cnt;
            }
        }
        cout<<endl;
    }
    return 0;
}