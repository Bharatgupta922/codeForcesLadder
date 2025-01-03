#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        // unordered_map<int, int> mp;
        int count = 0;
        for (int i =0; i < n ; ++i) {
            cin>>v[i];
            // mp[v[i]]++;
        }
        // cout<<mp.size()-1;
        for (int i =0; i < n-1 ; ++i) {
            if (v[i] > v[i+1]) count++;
        }
        cout<<count;

        cout<<endl; 
    }
    return 0;
}