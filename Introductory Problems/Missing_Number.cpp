#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, temp, sub_sum = 0; cin >> n;

    ll main_sum = n*(n+1)/2;

    for(int i = 0; i < n-1; i++) {
        cin >> temp;
        sub_sum += temp;
    }

    cout << main_sum - sub_sum;

}

int main() {
    solve();
}