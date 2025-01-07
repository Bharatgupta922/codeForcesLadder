#include<bits/stdc++.h>
using namespace std;
bool knapsack(vector<int> & a, int n, int sum) {
    if (n == 0) return false;
    if (sum == 0) return true;
    if (a[n-1] <= sum) 
    return knapsack(a, n-1, sum) || knapsack(a,n-1,sum-a[n-1]);
    return knapsack(a,n-1,sum);
}
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        int sum = 0;
        for (int i =0 ; i < n ; ++i) {
            cin>>a[i];
            sum+=a[i];
        }
        if (sum%2 == 0) {
            // bool found = knapsack(a, n, sum/2);
            // found ? 
            cout<<"YES";
            // : cout<<"NO";
        } else {
            cout<<"NO";
        }
        cout<<endl; 
    }
    return 0;
}