#include<bits/stdc++.h>
using namespace std;
long long solve(vector<int> &arr, int a, int b, int n) {
    long long time = 1, watch = b;
    sort(arr.begin(), arr.end());
    int i = 0 ; 
    while (i < n) {
        bool flg = false;
        while (i < n && (arr[i]+watch) <= a) {
            watch += arr[i];
            i++;
            flg = true;
        }
        if (flg) {
        // watch-=1;
        watch-=1;
        time+=1;
        }
        while(watch > 1) {
            watch--;
            time+=1;
        }
        // cout<<time<<"------------";
        if (arr[i] >= a) {
            break;
        }
    }
    // cout<<time<<endl;
    if (i != n) {
        long long x = n - i;
        time += (x*(a-1));
        // time+=1;
    }
    return time;
}
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> arr(n);
        for (int i =0; i  < n; ++i)
        cin>>arr[i];
        
         
        cout<<solve(arr, a,b,n);

        cout<<endl; 
    }
    return 0;
}