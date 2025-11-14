#include<bits/stdc++.h>
using namespace std;
// #define int long long
int main() {

    int t ;
    cin>>t;
    while(t--) {
        // cout<<"-----";
        string a;
        string b;
        cin>>a;
        cin>>b;
        vector<deque<int> > lastOccurence(26);
        int m = a.size(), n = b.size();
        for (int i =0; i < m ; ++i)
        {
            // cout<<a[i]-'A'<<endl;
            lastOccurence[a[i]-'A'].push_front(i);
        }
        bool ans = true;
        int minLast = m;
        for (int i = n-1; i>= 0; --i){
            if (lastOccurence[b[i]-'A'].empty()) {
                // cout<<b[i]<<endl;
                ans = false;
                break;
            } else {
                int last = lastOccurence[b[i]-'A'].front();
                lastOccurence[b[i]-'A'].pop_front();
                if (minLast < last) {
                    // cout<<b[i]<<"-----"<<minLast<<"-----"<<last;
                    ans = false;
                    break;
                } else {
                    minLast = last;
                }
            }
        }
        ans ? cout<<"YES":cout<<"NO";
        // cout<<a<<b;
        // bool ans = true;
        // int j = m-1;
        // for (int i = n-1; i >= 0; --i) {
        //     int x = b[i]-'A';
        //     while(j >= 0 && a[j]-'A' != x)j--;
        //     if (j < 0) {
        //         ans = false;
        //         break;
        //     }
        // }
        //         ans ? cout<<"YES":cout<<"NO";

        cout<<endl;
    }
    return 0;
}