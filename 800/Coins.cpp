#include<bits/stdc++.h>
using namespace std;
int main() {

    int t ;
    cin>>t;
    while(t--) {
       int m , n;
       cin>>m>>n;
    //    int x = n, i = 1;;
    // //    bool y = 1;
    // bool flg = false;
    //    while (x <= m) {
    //     x = (n*i);
    //     i++;
    //     if ((m-x)%2 == 0) {
    //         cout<<"YES";
    //         flg = true;
    //         break;
    //     }
    //    }
       if ((m-(n*((int)(m/n))))%2)
       cout<<"NO";
       else cout<<"YES";
        cout<<endl;
    }
    return 0;
}