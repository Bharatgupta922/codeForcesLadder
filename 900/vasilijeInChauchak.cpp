#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        long long n , k , x;
        cin>>n>>k>>x;
        long long mn = (k*(k+1));
        long long mx = (n*(n+1))-(n-k)*(n-k+1);
        // int cnt = 0;
        // for (long long i = n; i >= 0; --i) {
        //     mx += (long long)i;
        //     cnt++;
        //     if (cnt == k) break;
        // }
        if (2*x >= mn && 2*x <= mx)
        cout<<"YES"; 
    // << "--------"<<mx << "-------"<<mn;
        else cout<<"NO";
        //  << "--------"<<mx << "-------"<<mn;
        cout<<endl;
    }
    return 0;
}