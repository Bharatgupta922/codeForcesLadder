#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        int count = 0;
        // int l  = -1, r = -1;
        for (int i =0; i < n ; ++i)
        {
            cin>>a[i];
            if (a[i] == 0)count++;
            // if (l != -1 && a[i] != 0) l = i;
            // if (a[i] != 0) r = i;
        }
        if (count == n) cout<<'0';
        else {
            if (n%2 == 0) {
                cout<<'2'<<endl<<'1'<<" "<<n<<endl<<'1'<<" "<<n;
            } else {
                // if (a[n-1] != 0)
                cout<<'4'<<endl<<'1'<<" "<<n-1<<endl<<'1'<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl<<n-1<<" "<<n;
            }
        }
        
        cout<<endl;
    }
    return 0;
}