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
bool generateSubsetSums(std::vector<int>& a, std::vector<int>& b, int count2, int count6,int sum) {
    int currentSum = 0;
    for (int num : a) {
        currentSum += num;
    }
    b.push_back(currentSum);
    if ((sum+currentSum)%9==0) return true;
    for (int i = 1; i <= count2; ++i) {
        a.push_back(2);
        generateSubsetSums(a, b, count2 - i, count6, sum);
        a.pop_back(); 
    }

    for (int i = 1; i <= count6; ++i) {
        a.push_back(6);
        generateSubsetSums(a, b, count2, count6 - i, sum);
        a.pop_back(); 
    }
    return false;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        string x;
        cin>>x;
        int threeCnt = 0, twoCnt = 0, sum = 0;
        for (auto it : x) {
        sum += it-'0';
        if (it == '2') twoCnt++;
        else if (it == '3') threeCnt++;
        }
        if (sum%9 == 0) {
            cout<<"YES";
        } else if (twoCnt > 0 || threeCnt > 0) {

            // while(sum%9!=0 && (twoCnt || threeCnt)) {
            //     if (twoCnt > 0) {
            //         sum+=2;
            //         twoCnt--;
            //     }
            //     else if (threeCnt > 0) {
            //         sum += 6;
            //         threeCnt--;
            //     }
            // }
            // if (sum%9 == 0)
            // cout<<"YES";
            // else cout<<"NO";
            vector<int> subset;
            vector<int> sums;
            bool fg = false;
            if(generateSubsetSums(subset, sums, twoCnt, threeCnt, sum)) {
                cout<<"YES";
            } else {
                cout<<"NO";
            }
            // for (auto x : sums) 
            // if ((sum+x)%9 == 0) {
            //     fg= true;
            //     break;
            // }
            // if (fg)
            // cout<<"YES";
            // else cout<<"NO";

        } else {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}