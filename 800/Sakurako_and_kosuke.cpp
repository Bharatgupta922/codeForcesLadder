#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        bool flg = true;
        int x = 0, i = 1;
        while(abs(x) < n) {
            int b = 2*i - 1;
            if (flg) {
                b = -abs(b);
            }
                flg = !flg;
                x+=b;
                ++i;
        }
        flg ? cout<<"Sakurako":cout<<"Kosuke";

        cout<<endl; 
    }
    return 0;
}