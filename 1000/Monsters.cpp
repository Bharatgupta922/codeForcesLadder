#include <bits/stdc++.h>
using namespace std;
class Compare {
    public:
    bool operator()(pair<int, int> &a, pair<int, int> &b) {
        if (a.first < b.first) return true;
        else if (a.first == b.first) return a.second > b.second;
        else return false;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t ;
    cin>>t;
    while(t--) {
        int n , d;
        cin>>n>>d;
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare > q;
        vector<int> ans;
        for (int i =0; i < n ; ++i) {
            int x;
            cin>>x;
            q.push({x,i});
        }
        while(!q.empty()) {
            pair<int, int> front = q.top();
            if (front.first > d) {
                pair<int, int> diff = make_pair(front.first%d == 0 ? d : front.first%d, front.second);
                q.pop();
                q.push(diff);
            } else {
                ans.push_back(front.second);
                q.pop();
            }
        }
        for (auto x : ans) {
            cout<<x+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}