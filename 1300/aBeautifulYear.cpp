#include<bits/stdc++.h>
using namespace std;
bool checkDuplicates (int nums) {
    unordered_map<int, int> mp;
     while(nums!=0) {
     int b = nums%10;
     if (mp[b]) return true;
     else mp[b]++;
     nums/=10;
     }
     return false;
}
int main () {
    int a;
    cin>>a;
    unordered_map<int, int> mp;
    int num = a;
//     int res = 0;
//     int i = 1;
//     while(num!=0) {
//         int b = num%10;
//         if (mp[b]) {
//             for (int digit = 1; digit <= 9; ++digit) {
//                 if (!mp[digit]) {
//                     res = res*10 + digit;
//                     mp[digit]++;
//                     num/=10;
//                 }
//             }
//         } else {
//             mp[b]++;
//             res = res*10 + b;
//             num/=10;
//         }
//     }

// cout<<res;

num = ++a;
while (checkDuplicates(num)) {
    num++;
}
cout<<num;
    return 0;
}