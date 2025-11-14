#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n ;
        cin>>n;
        vector<int> a(n);
        bool flg = true;
        for (int i =0; i < n ; ++i) 
        {
            cin>>a[i];
            if ((a[i]-1) <= i) {
                flg = false;
            }
        }
        int j = 0;
        for (int i =n-1; i >= 0 ; --i) 
        {
            if ((a[i]-1) <= j) {
                flg = false;
            }
            j++;
        }
        
        if (flg) cout<<"YES";
        else cout<<"NO";    
        cout<<endl;
    }
    return 0;
}