#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int sz, x;
        cin>>sz>>x;
        vector<int> a(sz);
        // vector<int> odd;
        // vector<int> even;
        for (int i =0; i < sz ; ++i) {
            cin>>a[i];
            // if (a[i]&1)odd.push_back(a[i]);
            // else even.push_back(a[i]);
        }
        int mx = 0, mn = 0;
        for (int i =0; i < sz ; ++i) {
            mx += (a[i]%x == 0) ? (a[i]/x) : (a[i]/x) + 1;
        }
        int j = 0;
        while (j < sz) {
            if (a[j]%x == 0) {
                mn += (a[j]/x);
                j++;
            } else {
                int sum = a[j];
                j++;
                while(j<sz && sum%x != 0) {
                    sum += a[j];
                    j++;
                }

                mn += (sum%x == 0) ? (sum/x) : (sum/x)+1;
            }
        }
        cout<<mn<<" "<<mx;
        // int mn = 0, mx = 0;
        //     int i = 0, j = 0;
        //     int m = even.size(), n = odd.size();
        // // if (x&1) {
        //     while(i < m) {
        //         int f = even[i];
        //         if (f%x == 0) mx += f/x;
        //         else mx += f/x + 1;
        //         ++i;
        //     }
        //     while(j < n) {
        //         int a, b = 0;
        //         a = odd[j];
        //         j++;
        //         if (j<n) {
        //             b = odd[j];
        //             j++;
        //         }
        //         if ((a+b)%x == 0) mx += (a+b)/x;
        //         else mx += (a+b)/x + 1;
        //     }
        //     i = 0, j = 0 ;
        //     while(i < m && j < n) {
        //         mn += (odd[j] + even[i])%x  == 0 ? (odd[j] + even[i])/x : (odd[j] + even[i])/x + 1;
        //         j++;
        //         i++;
        //     }
        //     while(i < m) {
        //         mn += even[i]%x == 0 ? even[i]/x : even[i]/x + 1;
        //         i++;
        //     }
        //     while(j < n) {
        //         mn += odd[j]%x == 0 ? odd[j]/x : odd[j]/x + 1;
        //         j++;
        //     }
        //     if (x&1)
        //     cout<<mn<<" "<<mx;
        // else cout<<mx<<" "<<mn;
        // } 
        // else {
            
        // }
        cout<<endl;
    }
    return 0;
}