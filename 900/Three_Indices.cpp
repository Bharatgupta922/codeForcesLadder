#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
        int n, x,y,z;
        cin>>n;
        vector<int> a(n);
        for (auto &i: a)
        cin>>i;
    bool flg = false;
        for (int i =0; i < n ; ++i) {
            for (int j = i + 1; j < n ; ++j) {
                for (int k = j + 1;  k < n ; ++k) {
                    if (a[i] < a[j] && a[j] > a[k]) {
                        flg = true;
                        x = a[i];
                        y = a[j];
                        z = a[k];
                        break;
                    }
                }
                if (flg) break;
            }
            if (flg) break;
        }
        if(flg) {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z;
        }
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}