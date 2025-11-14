
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, d;
    cin>>n>>d;
    vector<int> a(n);
    for (auto &x : a) cin>>x;
    sort(a.begin(), a.end());
    int ans = 0;
    int i = 0, j = n-1;
    int count = 0;
    deque<int> q;
    for (auto x : a)q.push_back(x);
    while(!q.empty() && q.back() >= d) {
        count++;
        q.pop_back();
    }
    while(q.empty() == false) {
        int back  = q.back();
        int howmany = d%back == 0 ? d/back : d/back + 1;
        int cur = back;
        q.pop_back();
        while (howmany > 0 && !q.empty()) {
            cur += back;
            howmany--;
            q.pop_front();             
        }
        if (cur >= d) {
            count++;
        }
    }
    cout<<count;
    // while(i<j) {
    //     int tempi = i, tempj = j;
    //     if (a[j] >= d) {
    //         count++;
    //         j--;
    //     } else {
    //         int howmany = d%a[j] == 0 ? d/a[j] : d/a[j] + 1;
    //         int sum = a[j];
    //         j--;
    //         howmany--;
    //         while (i< j && howmany > 0) {
    //             i++;
    //             sum+=a[j];
    //             howmany--;
    //         }
    //         if (sum >= d) count++;
    //         else break;
    //     }
    //     if (i == tempi && j == tempj) {
    //         break;
    //     }
    // } 
    // cout<<count;
    return 0;
}