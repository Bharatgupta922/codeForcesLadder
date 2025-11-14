#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin>>t;
    while(t--) {
       int n ;
       cin>>n;
        int p;
        cin>>p;
        vector<int> a(n);
        vector<int> b(n);
        for (auto &x : a) cin>>x;
        for (auto &x : b) cin>>x;
        vector<pair<int, int> > com(n);
        for (int i= 0; i < n ; ++i) {
            com[i] = make_pair(a[i], b[i]);
        }
        sort(com.begin(), com.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            return a.second < b.second;
        });
        int sum = p, neighLeft = n-1;
        for (int i =0; i < n ; ++i) {
            if (com[i].second < p) {
                int diff = neighLeft - com[i].first;
                if (diff < 0) {
                    sum += neighLeft*com[i].second;
                    neighLeft = 0;
                    break;
                } else {
                    // cout<<neighLeft<<"---------"<<com[i].first<<endl;
                    neighLeft = neighLeft - com[i].first;
                    // cout<<neighLeft<<"---------"<<endl;   
                    sum += com[i].first*com[i].second;
                }
            } else {
                break;
            }
            if (neighLeft == 0) break;
        }
        if (neighLeft > 0) {
            // cout<<neighLeft<<"----------";
            sum += neighLeft*p;
        }
        cout<<sum;
       cout<<endl;
    }
    return 0;
}