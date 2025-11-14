#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int n = s.size();
        int first = 0, second = 0;
        for (int i =0 ; i< n - 1; ++i) {
            if (s[i] == 'a' && s[i+1] == 'b') {
                first++;
            } else if (s[i] == 'b' && s[i+1] == 'a') {
                second++;
            }
        }
        if (first == second) {
            cout<<s;
        } else if (first > second) {
            string ans = "";
            for (int i = 0; i < n - 1; ++i) {
                if (s[i] == 'a' && s[i+1] == 'b') {
                    s[i] = 'b';
                    first--;
                    if (first == second) break;
                }
            }
            cout<<s;
        } else {
            string ans = "";
            for (int i = 0; i < n -1; ++i) {
                if (s[i] == 'b' && s[i+1] == 'a') {
                    s[i] = 'a';
                    second--;
                    if (first == second) break;
                }
            }
            cout<<s;
        }
        cout<<endl;
    }
    return 0;
}