// Author: Ryan O'Callaghan
// Problem: (Two Knights) https://cses.fi/problemset/task/1072
// Date: 2023-03-08

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n; cin >> n;

    for(ll i = 1; i <= n; i++) {
        cout << ((i*i) * (i*i - 1) - (i-4)*16 - (i-4)*24 - ((i-4)*(i-4))*8 - 48) / 2 << "\n";
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC = 1;
    //cin >> TC;
    while(TC--) {
        solve();
    }

}