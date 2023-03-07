#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, temp; cin >> n;
    map<int, int> distinct;

    for(int i = 0; i < n; i++) {
        cin >> temp;
        if(distinct.find(temp) == distinct.end()) {
            distinct[temp] = 1;
        }
    }

    cout << distinct.size();
}

int main() {
    solve();
}