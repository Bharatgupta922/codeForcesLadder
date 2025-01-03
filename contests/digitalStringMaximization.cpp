#include<bits/stdc++.h>
using namespace std;
bool canMakeDivisibleBy9(int x, int m, int n) {
    int remainder = x % 9;
    for (int i = 0; i <= n; ++i) {
        int contributionFrom6 = i * 6;
        int needed = (remainder + contributionFrom6) % 9;
        if (needed == 0) {
            return true;
        }
        if (needed <= contributionFrom6 + m * 2 && (needed % 2 == 0)) {
            int twosNeeded = needed / 2;
            if (twosNeeded <= m) {
                return true; 
            }
        }
    }

    return false; 
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n ;
        cin>>n;
        
    }
    return 0;
}