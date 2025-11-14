#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        long long int n;
        cin>>n;
        int continousTillNow = 0;
        int maxTillNow;
        for (long long int i =1; i <= n ; ++i) {
            if (n%i == 0) {
                continousTillNow++;
            } else {
                continousTillNow = 0;
            }
            maxTillNow = max(maxTillNow, continousTillNow);
        }
        cout<<maxTillNow;
        cout<<endl;
    }
    return 0;
}