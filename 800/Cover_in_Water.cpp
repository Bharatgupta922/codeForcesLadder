#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        for (int i =0; i < n ; ++i)
        {
            char x;
            cin>>x;
            s+=x;
        }
        int i =0, j = 0, cnt = 0;
        while(i<n && j < n) {
            while(s[i] == '#') ++i;
            j = i;
            while(j < n && s[j] == '.') ++j;
            cnt += ((j-i) >= 2 ? 2 : (j - i));
            i = j;
        }
        cout<<cnt;
        cout<<endl; 
    }
    return 0;
}
