#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define F first
#define S second
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
void repeat (string &s, string y, int n) {
    while(n--) {
        s+=y;
    }
}
void solve() {
    int n ;
    cin>>n;
    stack<int> a;
    stack<int> b;
    int x;
    for (int i =0; i < n ; ++i) {
        cin>>x;
        a.push(x);
    }
    for (int i =0; i < n ; ++i) {
        cin>>x;
        b.push(x);
    }
    int cur , mx , ele ;
    if (a.top() == b.top()) {
        cur = 2;
        mx = 2;
        ele = a.top();
        a.pop();
        b.pop();
    } else if (a.top() > b.top()) {
        cur = 1;
        mx = 1;
        ele = b.top();
        b.pop();
    } else {
        cur = 1;
        ele = a.top();
        mx = 1;
        a.pop();
    }
    while(!a.empty() && !b.empty()) {
        while (!a.empty() && !b.empty() && a.top() == ele && b.top() == ele) {
            cur += 2;
            a.pop();
            b.pop();
            mx = max(mx, cur);
        }
        while(!a.empty() && a.top() == ele) {
            cur++;
            a.pop();
            mx = max(mx, cur);
        }
        while(!b.empty() && b.top() == ele) {
            cur++;
            b.pop();
            mx = max(mx, cur);
        }
        if (!a.empty() && !b.empty()) {
            if (a.top() == b.top()) {
                cur = 2;
                ele = a.top();
                a.pop();
                b.pop();
            } else if (a.top() > b.top()) {
                cur = 1;
                ele = b.top();
                b.pop();
            } else {
                cur = 1;
                ele = a.top();
                a.pop();
            }
            mx = max(mx, cur);
        }
        mx = max(mx, cur);
    }
    // cout<<b.top();
    while(!a.empty()) {
        if (a.top() == ele) {
            cur++;
            a.pop();
        } else {
            mx = max(mx, cur);
            ele = a.top();
            cur = 1;
            a.pop();
        }
    }
    while(!b.empty()) {
        if (b.top() == ele) {
            cur++;
            b.pop();
        } else {
            mx = max(mx, cur);
            ele = b.top();
            cur = 1;
            b.pop();
        }
        mx = max(mx, cur);
    }
    // return mx;
    cout<<mx<<"\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}