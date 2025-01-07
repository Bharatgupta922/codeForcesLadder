#include<bits/stdc++.h>
using namespace std;
int main() {
    int t ;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int sum = 0;
        for (int i = s.length() - 1; i >= 0; --i){
            if (i == 0) sum += (s[i]-'0');
            else sum += 9;
        }
        cout<<sum;
        cout<<endl;
    }
    return 0;
}