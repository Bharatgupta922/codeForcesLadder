
#include<bits/stdc++.h>
using namespace std;
// #define int long long
vector<int>  multiBFS(vector<vector<int> > & adj, vector<int> source, int n) {
    queue<int> q;
    vector<int> d(n+1, -1);
    for (auto x : source) {
        d[x] = 0;
        q.push(x);
    }
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for (auto nb : adj[cur]) {
            if (d[nb] == -1)
            d[nb] = d[cur]+1;
            q.push(nb);
        }
    }
return d;
}
int32_t main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
        int n;
        cin>>n;
        vector<vector<int> > adj(n+1);
        vector<int> evenSource;
        vector<int> oddSource;
        for (int i =1; i <= n ; ++i) {
            int x ; cin>>x;
            if (x&1) oddSource.push_back(i);
            else evenSource.push_back(i);
            if (i+x <= n)
            adj[i+x].push_back(i);
            if (i-x >= 1)
            adj[i-x].push_back(i);
        }
        vector<int> ans(n+1);
        vector<int>  getArr = multiBFS(adj, oddSource, n);
        for (auto id : evenSource)
        ans[id] = getArr[id];
        
        getArr = multiBFS(adj, evenSource, n);
        for (auto id : oddSource)
        ans[id] = getArr[id];

        for (int i = 1; i <= n ; ++i)
        cout<<ans[i]<<" ";

    return 0;
}