#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    int t;
    cin>>t;
    while(t--) {
     int n ;
     cin>>n;
     vector<int> arr(n);
     int x = 0, y = 0;
     for (int i =0; i < n ; ++i) {
        cin>>arr[i];
        if (i%2 == 0) x+=arr[i];
        else y+=arr[i];
     }
    //  if (n%2==0) {
        int oddCount = n/2, evenCount = n%2 ==0 ? n/2 : (n/2) + 1;
        x%evenCount == 0 && y%oddCount == 0 && x/evenCount == y/oddCount ? cout<<"YES":cout<<"NO";
    //  }
    //     int b ;
    //  while(n--) {
    //     cin>>b;
        
    //  }
    // (x==y )? cout<<"YES":cout<<"NO";
    //  cout<<x == y ? "Yes" : "No";
    cout<<endl;
    }
    return 0;
}