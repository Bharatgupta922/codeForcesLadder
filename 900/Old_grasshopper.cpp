#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {

        // for (long long i =1; i <= n; ++i) {
        //     if (ans%2 == 0) {
        //         ans -= i;
        //     } else {
        //         ans += i;
        //     }
        // }
        // cout<<ans;
        // if (ans&1) {
        //     if (n%2==0) {
        //         even = n/2;
        //         odd = even;
        //     } else {
        //         odd = n/2;
        //         even = odd +1;
        //     }
        //     cout<<x+((odd*(2+(odd-1)*2))/2)-((even*(4+(even-1)*2))/2);
        // } else {
        //     if (n%2==0) {
        //         even = n/2;
        //         odd = even;
        //     } else {
        //         even = n/2;
        //         odd = even+1;
        //     }
        //     cout<<x-((odd*(2+(odd-1)*2))/2)+((even*(4+(even-1)*2))/2);
        // }
  long long x, n;
        cin >> x >> n;
        
        if (n % 4 == 0) {
            cout << x << endl;
        } else if (n % 4 == 1) {
            cout << (x % 2 == 0 ? x - n : x + n) << endl;
        } else if (n % 4 == 2) {
            cout << (x % 2 == 0 ? x + 1 : x - 1) << endl;
        } else { 
            cout << (x % 2 == 0 ? x + n + 1 : x - n - 1) << endl;
        }

    }
    return 0;
}