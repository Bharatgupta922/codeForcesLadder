#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        vector<int> a(4);
        for (int i =0; i < 4; ++i) {
            cin>>a[i];
        }
        int x = a[0]+a[1];
        int y = a[3]-a[2];
        int ans1 = 0, ans2 = 0;
        if (a[0]+a[1] == x) ans1++;
        if (a[0]+a[1] == y) ans2++;
        if (a[1]+x == a[2]) ans1++;
        if (a[1]+y == a[2]) ans2++;
        if (x+a[2] == a[3]) ans1++;
        if (y+a[2] == a[3]) ans2++;
        cout<<max(ans1, ans2);
        cout<<endl; 
    }
    return 0;
}