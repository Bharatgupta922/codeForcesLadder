#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n ;
        cin>>n;
        string s;
        cin>>s;
        int i =0;
            int j = i;
            int ans = 1;
        while(i<n) {
            j = i+1;
            while(j<n && s[j] == s[j-1])j++;
            if (i != j+1)
            ans = max(ans, j-i);
            i = j;
        }
        cout<<ans+1;
        cout<<endl;
    }
    return 0;
}