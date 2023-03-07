#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, q, a, b; cin >> n; cin >> q;

    vector<ll> arr(n+1);

    for(ll i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }

    for(ll j = 0; j < q; j++) {
        cin >> a; cin >> b;
        cout << arr[b] - arr[a-1] << endl;
    }
}

int main() {
    solve();
}