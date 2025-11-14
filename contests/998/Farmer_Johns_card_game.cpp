#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n ,m;
        cin>>n>>m;
        int arr[n][m];
        vector<int> order(n);

        for (int i =0; i < n ; ++i) {
            for (int j =0; j < m ; ++j) {
                cin>>arr[i][j];
                if (arr[i][j] < n) {
                    order[i]  = arr[i][j];
                }
            }
        }
        if (order.size() != n) {
            cout<<"-1";
        } else if (order.size() == 1) {
            cout<<"1";
        } else {
            bool flg = true;
            for (int i =0; i < n ;++i) {
                int seq = order[i]; 
                for (int j = 0 ; j < m ; ++j) {
                    if (arr[i][j]%n != seq) {
                        flg = false;
                        break;
                    }
                }
                if (!flg) break;
            }
            if (!flg) cout<<"-1";
            else {
                vector<int> ans(n);
                for (int i = 0; i < n ; ++i)
                ans[order[i]]= i+1;
                for (auto x : ans)
                cout<<x<<" ";
            }
        }
        cout<<endl; 
    }
    return 0;
}