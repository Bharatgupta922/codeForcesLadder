#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {
        int n ;
        cin>>n;
        vector<int> a(n);
        int one = 0, two = 0;
        unordered_map<int, int> mp; 
        for (int i = 0 ; i  < n ; ++i) 
        {
            cin>>a[i];
            if (a[i] == 1) one++;
            else {
                two++;
                mp[two] = i;
            }
        }
        if (two%2!=0) {
            cout<<"-1";
        } else if (two == 0) {
            cout<<"1";
        } else {
            cout<<mp[two/2] + 1;
        }
        cout<<endl;
    }
    return 0;
}