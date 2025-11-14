#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
       int n, x ;
        cin>>n;
        vector<int> a(n);
        vector<int> ans;
        bool flg = false;
        int totalSum = ((n*(n+1))/2);
        int div;
        for (int i =1; i <= n ; ++i) {
            cin>>x;
            if (x != i || flg) {
                if (!flg)
                div = 2*totalSum/(n-i+1);
                flg = true;
                ans.push_back(div-x);
            } else {
                ans.push_back(x);
                totalSum-=x;
            }
        }
        for(auto it : ans)
        cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}