#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {

    int n; cin >> n;

    if(n == 1) {
        cout << 1 << "\n";
        return;
    }

    if(n < 4) {
        cout << "NO SOLUTION" << "\n";
        return;
    }

    for(int i = 2; i <= n; i+=2) {
        cout << i << " ";
    }

    for(int i = 1; i <= n; i+=2) {
        cout << i << " ";
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