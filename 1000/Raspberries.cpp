
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {
       int n, k;
       cin>>n>>k;
       vector<int> a(n);
       for (auto &x : a)
       cin>>x;
       if (k == 2) {
        bool evenpresent = false;
        for (auto x : a)
        if (x%2==0){
            evenpresent = true;
            break;
        }
        if (evenpresent) cout<<"0";
        else cout<<"1";
       } else if (k == 3) {
        bool divisiblePresent = false;
        int ans = INT_MAX;
        for (auto x : a){
            if (x%3 == 0) {
                divisiblePresent = true;
                break;
            }
            ans = min(ans, (x-x%3+3) - x);
        }
        if (divisiblePresent) cout<<"0";
        else cout<<ans;
       } else if (k == 5) {
        bool divisiblePresent = false;
        int ans = INT_MAX;
        for (auto x : a){
            if (x%5 == 0) {
                divisiblePresent = true;
                break;
            }
            ans = min(ans, (x-x%5+5) - x);
        }
        if (divisiblePresent) cout<<"0";
        else cout<<ans;
       } else {
        bool divisiblePresent = false;
        int evenCount = 0;
        int ans4 = INT_MAX;
        for (auto x : a) {
            if (x%4 == 0) {
                divisiblePresent = true;
                break;
            }
            if (x%2 == 0) evenCount++;
            if (evenCount == 2) {
                divisiblePresent = true;
                break;
            }
            ans4 = min(ans4, (x-x%4+4) - x);
        }
        if (divisiblePresent) cout<<"0";
        else cout<<min(2-evenCount, ans4);
       }
        cout<<endl;
    }
    return 0;
}