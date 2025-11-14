#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int sz = s.length();
        int first_zero = -1, second = -1;
        for (int i=sz-1; i >= 0 ;--i) {
            if (first_zero == -1 && s[i] == '0') {
                first_zero = i;
            } else if (first_zero != -1 && second == -1 && (s[i] == '0' || s[i] == '5')) {
                second = i;
            }
        }
        int ans1 = INT_MAX;
        if (first_zero != -1 && second != -1) {
            // if (t == 0) cout<<"first"<<first_zero<<"sec"<<second;
            
            ans1 = (first_zero-second-1)+(sz-first_zero-1);
        }
        first_zero = -1, second = -1;
        for (int i=sz-1; i >= 0 ;--i) {
            if (first_zero == -1 && s[i] == '5') {
                first_zero = i;
            } else if (first_zero != -1 && second == -1 && (s[i] == '2' || s[i] == '7')) {
                second = i;
            }
        }
        int ans2 = INT_MAX;
        if (first_zero != -1 && second != -1) {
            ans2 = (first_zero-second-1)+(sz-first_zero-1);
        }
        // cout<<"----"<<ans1<<"----"<<ans2<<endl;
        cout<<min(ans1, ans2);
        cout<<endl; 
    }
    return 0;
}