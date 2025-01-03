#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    for (int i = 5; i < 100; i+=2)
    v.push_back(i);
    while(t--) {
        int n, i = 0;
        cin>>n;
        while(n--)
        cout<<v[i++]<<" ";
        cout<<endl; 
    }
    return 0;
}