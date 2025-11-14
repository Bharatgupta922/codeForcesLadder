#include<bits/stdc++.h>
using namespace std;
#define int long long 
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        int allZero = 1, first ,  isSame = 1, firstNonZero = -1, flg = true ;
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
            if (i == 0) first = a[0];
            if (a[i] != 0) allZero = 0;
            if (i!= 0 && a[i]!=first) isSame = 0;
            if (a[i]!= 0) {
                if (firstNonZero == -1) firstNonZero = i;
                else if (firstNonZero+1 != i) {
                    flg = false; 
                    // cout<<i<<"----";

                } else firstNonZero++;
            }
        }
        if (allZero) cout<<"0";
        else if (isSame || flg) cout<<"1";
        else cout<<"2";
        // int i = 0, j, count  = 0;
        // while(a[i]==0)i++;
        // while(i<n) {
        //     while(i < n && a[i]==0)i++;
        //     if (i == n) break;
        //     j = i+1;
        //     while(j<n && a[j]!=0)j++;
        //     i = j;
        //     count++;
        // }
        // cout<<count;

        cout<<endl;
    }
    return 0;
}