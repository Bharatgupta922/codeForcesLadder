#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        unordered_map<int, int> mp;
        bool isSame = true;
        for (int i =0 ; i < n ; ++i) {
            cin>>a[i];
            mp[a[i]]++;
            if (i != 0 && a[i] != a[i-1])
            isSame = false;
        }
        // cout<<"vvsav";
        if (n < 3 || isSame) {
            cout<<"Yes";
        } else if (mp.size() > 2) {
            cout<<"No";
        } else {
            int o = mp.begin()->second;
            int p = next(mp.begin())->second;
            // if (n % 2 == 0) {
            //     if (o == n / 2 && p == n / 2) {
            //         cout << "Yes" << endl;
            //     } else {
            //         cout << "No" << endl;
            //     }
            // } else {
            //     if ((o == n / 2 && p == n / 2 + 1) || (o == n / 2 + 1 && p == n / 2)) {
            //         cout << "Yes" << endl;
            //     } else {
            //         cout << "No" << endl;
            //     }
            // }
            (n%2 == 0) ? (o == (n/2) && p == (n/2)) ? cout<<"Yes" : cout<<"No" : ((o == (n/2) && p == (n/2+1)) || (o == (n/2+1) && p == (n/2))) ? cout<<"Yes" : cout<<"No";
        }
        // cout<<"----------------";
        cout<<endl; 
    }
    return 0;
}