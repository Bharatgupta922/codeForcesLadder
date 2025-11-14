#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        string x;
        cin>>x;
        int count = 0;
        for (auto it : x)
        if (it == '1')
        count++;
    cout<<count;
        cout<<endl;
    }
    return 0;
}