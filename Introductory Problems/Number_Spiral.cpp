#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll x, y; cin >> x >> y;

    if(x < y) {
        
        if(!(y&1)) {
            cout << (y*y) - ((y - 1) * 2) + x - 1 << "\n";
        } else {
            cout << (y*y) - x + 1 << "\n";
        }

    } else if(x > y){

        if(!(x&1)) {
            cout << (x*x) - y + 1 << "\n";
        } else {
            cout << (x*x) - ((x - 1) * 2) + y - 1 << "\n";
        }

    } else {
        cout << (x*x) - y + 1 << "\n";
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC = 1;
    cin >> TC;

    while(TC--) {
        solve();
    }

}