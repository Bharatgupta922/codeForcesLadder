#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n, i = 0;
        cin>>n;
        vector<int> a(n);
        bool isSorted = true;
        for (int i =0; i < n ; ++i) {
            cin>>a[i];
            if (i!=0 && a[i] < a[i-1])
                isSorted = false;
        }
        if (isSorted) cout<<"YES";
        else if (a[0] != 1) cout<<"NO";
        else cout<<"YES";
        // else {
        //     for (int i =1; i < n-1 ;) {
        //         if (a[i] > a[i+1]) {
        //             swap(a[i], a[i+1]);
        //             i+=2;
        //         } else ++i;
        //     }
        //     isSorted = true;
        //     for (int i =1; i < n ; ++i)
        //         if (a[i] < a[i-1]) {
        //         isSorted = false;
        //         break;
        //         }
        //     isSorted? cout<<"YES":cout<<"NO";
        // }
        cout<<endl; 
    }
    return 0;
}