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
    int n , r, b;
    cin >> n >> r >> b;
    string s = "";
    if (r >= b) {
        int diff = r-b;
        repeat(s, "R", diff);
        r -= diff;
        repeat(s, "BR", r);
    } else {
        int diff = b-r;
        repeat(s, "B", diff);
        b -= diff;
        repeat(s, "RB", b);
    }
    cout<<s<<"\n";
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