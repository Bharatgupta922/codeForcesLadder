#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int x;
        int sum = 0;
        for (int i =0; i < n-1 ; ++i) {
            cin>>x;
            sum+=x;
        }
        cout<<-sum;
        cout<<endl; 
    }
    return 0;
}