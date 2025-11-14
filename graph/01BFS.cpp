
#include<bits/stdc++.h>
using namespace std;
// #define int long long
// vector<int>  multiBFS(vector<vector<int> > & adj, vector<int> source, int n) {
//     queue<int> q;
//     vector<int> d(n+1, -1);
//     for (auto x : source) {
//         d[x] = 0;
//         q.push(x);
//     }
//     while(!q.empty()) {
//         int cur = q.front();
//         q.pop();
//         for (auto nb : adj[cur]) {
//             if (d[nb] == -1)
//             d[nb] = d[cur]+1;
//             q.push(nb);
//         }
//     }
// return d;
// }

void bfs(vector<vector<pair<int, int> > > &adj, vector<int> &d) {
    deque<int> q;
    q.push_back(0);
    d[src] = 0;
    while(!q.empty()) {
        int cur = q.front();
        q.pop_front();
        for (int i =0; i < adj[cur].size(); ++i) {
            int nb = adj[cur][i].first;
            int w = adj[cur][i].second;
            if (d[cur] + w < d[nb]) {
                d[nb] = db[cur] + w;
                if (w == 1) q.push_back(nb);
                else q.push_front(nb);
            }
        }
    }
    for (int i =0; i < n ; ++i)
        if (d[i] == INT_MAX)
        d[i] = -1;
    return d;
}

int32_t main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
        int n;
        cin>>n;
        vector<vector<pair<int, int> > > adj(n);
        for (int i =0; i < n ; ++i) {
            int x,y,z;
            cin>>x>>y>>z;
            adj[x].push_back(make_pair(y,z));
            adj[y].push_back(make_pair(x,z));
        }
        vector<int> d(n, INT_MAX);


    return 0;
}