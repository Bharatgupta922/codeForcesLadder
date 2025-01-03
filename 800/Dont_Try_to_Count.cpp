#include<bits/stdc++.h>
using namespace std;
bool isSubStr (string x , string y) {
    return x.find(y) != string::npos;
}
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int m,n;
        string x,y;
        cin>>m>>n;
        cin>>x>>y;
        int i =0;
        bool found = false;
        bool goOne = false;
        bool goTwo = true;
        while (goTwo) {
            if (isSubStr(x,y)) {
                found = true;
                break;
            }
            if (goOne) {
                goTwo = false;
            }
            if (x.length() > 25) {
                goOne = true;
            }
            x += x;
            i++;
        }
        found ? cout<<i : cout<<"-1";
        cout<<endl; 
    }
    return 0;
}