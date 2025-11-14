#include <bits/stdc++.h>

using namespace std;
void solve () {
int n ;
cin>>n;
vector<int> a(n);
for (auto &x: a) {
    cin>>x;
}
vector<int> freq;
freq.push_back(1);
for (int i = 1; i < n ; ++i) {
    if (a[i] == a[i-1]) {
        freq[freq.size()-1]++;
    } else {
        freq.push_back(1);
    }
}
vector<int> res;
bool ans = true;
int start = 1;
for (int i =0; i < freq.size() ; ++i) {
    if (freq[i] == 1) {
        ans = false;
        break;
    } else {
        if (freq[i]&1) {
            vector<int> temp;
            for (int j = start; j <= start+freq[i]-1; ++j) {
                temp.push_back(j);
            }
            int x = 0, y = temp.size()-1;
            while(x<y){
                swap(temp[x], temp[y]);
                x++;
                y--;
            }
            swap(temp[temp.size()/2], temp[temp.size()/2-1]);
            for (auto x : temp) {
                res.push_back(x);
            }
            start = res.size()+1;
        } else {
            vector<int> temp;
            for (int j = start; j <= start+freq[i]-1; ++j) {
                temp.push_back(j);
            }
            int x = 0, y = temp.size()-1;
            while(x<y){
                swap(temp[x], temp[y]);
                x++;
                y--;
            }
            for (auto x : temp) {
                res.push_back(x);
            }
            start = res.size()+1;
        }
    }
}
if (ans) {
    for (auto x : res) {
        cout<<x<<" ";
    }
} else {
    cout<<"-1"; 

}

}
// void solve() {
//     int n ;
//     cin>>n;
//     vector<int> a(n);
//     bool ans = true;
//     vector<int> freq;
//     unordered_map<int, int> mp;
//     for (int i = 0; i < n ; ++i) {
//         cin>>a[i];
//         if (i!=0 && a[i]!=a[i-1]) {
//          ans = false;
//         }
//         mp[a[i]]++;
//     }
//     for (auto x : mp) {
//         if (x.second == 1) {
//             ans = false;
//             break;
//         }
//     }
//     if (ans && n != 1) {
//         if (n&1) {
//             vector<int> res(n);
//             for (int i = 1; i <= n ; ++i) {
//                 res[i-1] = n-i+1;
//             }
//             swap(res[n/2], res[n/2-1]);
//             for (auto x : res) {
//                 cout<<x<<" ";
//             }
//         } else {
//             for (int i = n; i >= 1; --i) 
//             cout<<i<<" ";
//         }
//     } else {
//         cout<<"-1";
//     }
// }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout<<'\n'; 
    }

    return 0;
}