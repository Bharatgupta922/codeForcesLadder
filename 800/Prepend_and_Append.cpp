#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        string x ;
        cin>>n;
        cin>>x;
        int i =0, j = n-1;
        while (i < j && ((x[i] == '0' && x[j] == '1') || (x[i] == '1' && x[j] == '0'))) {
            i++;
            j--;
        }
        if (i == j) cout<<"1";
        else if (i > j) cout<<"0";
        else cout<<j-i+1;
        cout<<endl;
    }
    return 0;
}