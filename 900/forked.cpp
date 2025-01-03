#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int x , y, a,b,m ,n, count= 0;
        cin>>x>>y>>a>>b>>m>>n;
        vector<pair<int, int> > k, q;
        if (x == y) {
        k.push_back({a+x,b+x});
        k.push_back({a-y,b+x});
        k.push_back({a-x,b-x});
        k.push_back({a+y,b-x});
        
        q.push_back({m+x,n+x});
        q.push_back({m-y,n+x});
        q.push_back({m-x,n-x});
        q.push_back({m+y,n-x});
        } else {
        k.push_back({a+x,b+y});
        k.push_back({a+y,b+x});
        k.push_back({a+x,b-y});
        k.push_back({a+y,b-x});
        k.push_back({a-x,b+y});
        k.push_back({a-y,b+x});
        k.push_back({a-x,b-y});
        k.push_back({a-y,b-x});
        
        q.push_back({m+x,n+y});
        q.push_back({m+y,n+x});
        q.push_back({m+x,n-y});
        q.push_back({m+y,n-x});
        q.push_back({m-x,n+y});
        q.push_back({m-y,n+x});
        q.push_back({m-x,n-y});
        q.push_back({m-y,n-x});
        }
        for (int i =0;  i < k.size(); ++i) 
            for (int j = 0 ; j < q.size(); ++j) 
                if (k[i].first == q[j].first && k[i].second == q[j].second) 
                count++;
        cout<<count<<endl;
    }
    return 0;
}