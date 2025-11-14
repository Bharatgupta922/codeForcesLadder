#include<bits/stdc++.h>
using namespace std;
int subSize[1000001];
int level[1000001];

void dfs (int cur, int par, vector<vector<int> > &adj) {
    cout<<cur<<endl;
    for (int i = 0; i < adj[cur].size(); ++i) {
        if (adj[cur][i] == par) {
            continue;
        } else {
            dfs(adj[cur][i], cur, adj);
        }
    }
}


void dfsSize (int cur, int par, vector<vector<int> > &adj) {
    subSize[cur] = 1;
    int sz = 0;
    for (int i = 0; i < adj[cur].size(); ++i) {
        if (adj[cur][i] == par) {
            continue;
        } else {
            dfsSize(adj[cur][i], cur, adj);
            subSize[cur] += subSize[adj[cur][i]];
        }
    }
    // subSize[cur] = sz;
    // return sz;
}

void dfsLevel (int cur, int par, vector<vector<int> > &adj) {
    // if (par == -1)
    // level[cur] = 0;
    // else 
    level[cur] = level[par] + 1;

    for (int i = 0; i < adj[cur].size(); ++i) {
        if (adj[cur][i] == par) {
            continue;
        } else {
            dfsLevel(adj[cur][i], cur, adj);
            // subSize[cur] += subSize[adj[cur][i]];
        }
    }
    // subSize[cur] = sz;
    // return sz;
}


void bfs (int cur, int par, vector<vector<int> > &adj) {
    deque<pair<int ,int> > q;
    q.push_back({cur, -1});
    while (!q.empty()) {
        pair<int, int> frnt = q.front();
        q.pop_front();
        cout<<frnt.first<<"\n";
        for(int i = 0;  i < adj[frnt.first].size(); ++i) {
            if (frnt.second == adj[frnt.first][i]) {
                continue;
            } else {
                q.push_back({adj[frnt.first][i], frnt.first});
            }
        }
    }
    
}

int main() {

    int n ;
    cin>>n;

    vector<vector<int> > adj(n+1);
    for (int i =0; i < n -1 ; ++i) {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    // dfs(1, -1, adj);
    // bfs(1, -1, adj);
    dfsSize(1, -1, adj);
    // dfsLevel(1, -1, adj);
    
    for (int i =0; i < n; ++i) {
        cout<<subSize[i];
        // cout<<level[i];
        cout<<endl;
    }


    return 0;
}