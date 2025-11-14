#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n, l , r;
        cin>>n>>l>>r;
        priority_queue<int> mxright;
        priority_queue<int> mxleft; 
        priority_queue<int, vector<int>, greater<int> > leftMin;
        priority_queue<int, vector<int>, greater<int> > rightMin;
        vector<int> a(n);
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
            if ((i+1) >= l && (i+1) <= r) {
                mxleft.push(a[i]);
                mxright.push(a[i]);
            }
            if (i+1 < l) {
                leftMin.push(a[i]);
            }
            if (i+1 > r) {
                rightMin.push(a[i]);
            }
        }
        
        int ans = 0;
        
        while(!leftMin.empty() && !mxleft.empty()) {
            int a, b;
            a = leftMin.top();
            b = mxleft.top();
            if (a > b) {
                ans += b;
            } else {
                ans += a;}
            leftMin.pop();
            mxleft.pop();
        }
        while(!mxleft.empty()) {
            ans += mxleft.top();
            mxleft.pop();
        }
        int ans2 = 0;
while(!rightMin.empty() && !mxright.empty()) {
            int a, b;
            a = rightMin.top();
            b = mxright.top();
            if (a > b) {
                ans2 += b;
            } else ans2 += a;
            rightMin.pop();
            mxright.pop();
        }
        while(!mxright.empty()) {
            ans2 += mxright.top();
            mxright.pop();
        }
        cout<<min(ans, ans2);
        cout<<endl; 
    }
    return 0;
}