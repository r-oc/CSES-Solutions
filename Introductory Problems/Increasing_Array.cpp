#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {

    ll n; cin >> n;
    vector<ll> arr(n);
    ll total = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++) {

        if (arr[i] < arr[i - 1]) {
            total += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }

    }

    cout << total;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}