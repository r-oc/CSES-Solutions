// Author: Ryan O'Callaghan
// Problem: (Two Sets) https://cses.fi/problemset/task/1092
// Date: 2023-03-09
 
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    ll n; cin >> n; ll sum = (n * (n + 1) / 2);
 
    if((sum&1)) { cout << "NO\n"; return; }

    map<int, int> sums;

    cout << "YES\n";
    sum /= 2;

    for(int i = 0; i < n && sum != 0; i++) {
        if(sum - (n-i) >= 0) {
            sum -= (n-i);
            sums[n-i] = 0;
        }
    }

    cout << sums.size() << "\n";
    for(auto item : sums) {
        cout << item.first << " ";
    }

    cout << "\n" << n - sums.size() << "\n";
    for(int i = 1; i <= n; i++) {
        if(sums.find(i) == sums.end()) {
            cout << i << " ";
        }
    }


}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int TC = 1;
    //cin >> TC;
    while(TC--) solve();
}