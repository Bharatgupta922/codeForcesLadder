#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        vector<pair<int, int> > mp(n);
        for (int i =0; i< n ; ++i) {
            cin>>a[i];
            // mp[i] = a[i];
        }

        for (int i =0; i< n ; ++i) {
            cin>>b[i];
            mp[i] = make_pair(a[i], b[i]);
        }
        // sort(mp.begin(), mp.end());
        // for (auto x : mp) 
        // cout<<x.first <<" ----" <<x.second<<endl;
        int mxMinus = INT_MAX, minus = 0;
        bool ans = 1;
        for (int i =0 ; i < n ; ++i) {
            if ((mp[i].first-minus) >= mp[i].second) {
                mxMinus = min(mxMinus, (mp[i].first-minus)-mp[i].second);
            } else {
                    int need = mp[i].second - (mp[i].first - minus);
                    if (need > mxMinus) {
                        ans = false;
                        break;
                    } else {
                        mp[i].first += need;
                        minus += need;
                        mxMinus = 0;
                    }
            }
        }
        ans ? cout<<"YES" : cout<<"NO";
        cout<<endl; 
    }
    return 0;
}   