#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int n = s.size();
        int odd = 0, even = 0;
        for (int i =0; i < n ; ++i) {
            if (s[i] == '0') even++;
            else odd++;
        }
        if (min(even, odd)&1) cout<<"DA";
        else cout<<"NET";

        cout<<endl;
    }
    return 0;
}