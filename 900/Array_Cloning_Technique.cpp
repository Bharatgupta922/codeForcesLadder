#include<bits/stdc++.h>
using namespace std;
int main() {
 
    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        map<int, int> mp;
        int maxFreq = INT_MIN;
        for (int i =0 ; i < n ; ++i) {
            cin>>a[i];
            mp[a[i]]++;
            maxFreq = max(maxFreq, mp[a[i]]);
        }
        if (mp.size() == 1) {
            cout<<"0";
        } else {
            int left = n - maxFreq;
            // int ans = 0, i = 1;
            // int allowed = maxFreq*i;
            // while(left > 0) {
            //     ans+=1;
            //     if (left > allowed){
            //     left -= allowed;
            //     ans+=allowed;
            //     }
            //     else {
            //         ans += left;
            //         left = 0;
            //     }
            //     i++;
            //     allowed = allowed*i;
            // }2 5 7 6 3
            // cout<<ans;
 
            int carry = 0, zeros = maxFreq, ans =0;
            // if (t == 2)cout<<left<<endl;
            while(left > 0) {
                if (carry > 0 && left > 0 && (left == 1 || carry == 1)) {
                        left -= 1;
                        carry -= 1;
                        ans += 1;
                }
                if (carry > 0 && left > 0) {
                    if (carry == left) {
                        ans += left;
                        left = 0;
                        carry = 0;
                    } 
                    // else if (carry > left && left&1) {
                    //     ans += (left-1);
                    //     left = 1;
                    //     carry -= (left-1);
                    // } 
                    else if (carry > left 
                    // && left%2 == 0
                    ) {
                        ans += left;
                        left = 0;
                        carry -= (left);
                    } 
                    // else if (carry < left && left&1) {
                    //     ans += (carry-1);
                    //     left -= (carry -1);
                    //     carry = 1;
 
                    //     carry = 0;
                    //     left -=1;
                    //     ans +=1;
                    // } 
                    else if (carry < left 
                    // && left%2 == 0
                    ) {
                        ans += carry;
                        left -= carry;
                        carry = 0;
                    }
                }
                // while (carry > 0 && left > 0) {
                //     left -= 2;
                //     carry-=2;
                //     ans += 2;
                // }
                //  if (left == 1 && carry > 0) {
                //     left -= 1;
                //     ans +=1;
                //     break;
                // }
                if (left  == 0) break;
                ans += 1;
                carry += (n-left);
            }
            cout<<ans;
        }
        cout<<endl; 
    }
    return 0;
}