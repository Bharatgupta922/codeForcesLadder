
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin>>t;
    while(t--) {
       int n;
       cin>>n;
       if (n == 1) {
        int m ;
        cin>>m;
        int ans = INT_MAX;
        for (int i =0; i < m; ++i)
        {
            int x;
            cin>>x;
            ans = min(ans, x);
        }
        cout<<ans;
       } else {
       vector<vector<int> > a(n);
       vector<int> minSecond(n);
       vector<int> minFirst(n);
       int mnSecond = INT_MAX;
       int sum = 0;
       for (int i =0; i < n; ++i) {
        int m;
        cin>>m;
        for (int j = 0; j < m ; ++j) {
            int x;cin>>x;
            a[i].push_back(x);
        }
        int first = INT_MAX;
       int second = INT_MAX;
       int countofFirst = 0;
        for (int j = 0; j < m ; ++j) {
            if (a[i][j] < first) {
            second = first;
            
            first = a[i][j];
            // countofFirst++;
        }
        //  else if (a[i][j] == first) {
        //     countofFirst++;    
        // }

        ////
        else if (first <= a[i][j] && second >= a[i][j]) {
            second = a[i][j];
        }
        }
        minSecond[i] =  second;
        // cout<<second<<"jvdjhvhjZ---"<<countofFirst<<"-----"<<endl;
        minFirst[i] = first;
        mnSecond = min(mnSecond, second);
        sum += second;
       }
    //    cout<<sum<<"-----------";
       
       sum -= mnSecond;
    //    cout<<"-----"<<mnSecond<<endl;
       int d= INT_MAX;
       for (int i =0; i < n ; ++i) {
        d = min(d, minFirst[i]);
    }
    d = min(d, mnSecond);
        // cout<<"----"<<sum<<endl;
        cout<<sum+d;
        }
       
        cout<<endl;
    }
    return 0;
}