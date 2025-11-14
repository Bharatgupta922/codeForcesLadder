#include<bits/stdc++.h>
using namespace std; 
#define int long long
int32_t main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int twos = 0, threes = 0;
        // if (n%2 == 0) {
        //     twos += (n/2);
        //     n-=twos*2;
        // } 
        // if (n%3 == 0) {
        //     threes += (n/3);
        //     n-=threes*3;
        // }
        // if (n > 0) {
        //     cout<<"-1";
        // } else {
        //     int ans = 0;
        //     if (twos > threes)
        //     cout<<"-1";
        //     else {
        //         ans += twos;
        //         threes-=twos;
        //         ans += threes*2;
        //         cout<<ans;
        // }
        // }
        bool flg = true;
        while (n % 2 == 0) {
        twos++;
        n = n/2; 
        }
              while (n % 3 == 0) {
          
             threes++;
            n = n/3; 
        }
     if (n > 2) 
        if (n == 3) threes++;
        else flg = false;

        if (!flg) {
            cout<<"-1";
        } else {
            int ans = 0;
            if (twos > threes)
            cout<<"-1";
            else {
                ans += twos;
                threes-=twos;
                ans += threes*2;
                cout<<ans;
            }
        }

        cout<<endl;
    }
    return 0;
}