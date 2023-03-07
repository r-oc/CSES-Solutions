#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 7;

void solve() {

    int n; cin >> n;
    vector<ll> combos(n+1, 0);

    combos[0] = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 6; j++) {

            if(i-j >= 0) {
                combos[i] = (combos[i] + combos[i - j]) % mod;
            }

        }
    }

    cout << combos[n];
}

int main() {
    solve();
}