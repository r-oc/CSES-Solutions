#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    // A, C, G, T
    string in; cin >> in;
    vector<int> reps;

    int sum = 1;

    for(long unsigned i = 0; i < in.length(); i++) {
        if(in[i] == in[i+1]) {
            sum++;
        } else {
            reps.push_back(sum);
            sum = 1;
        }
    }

    cout << *max_element(reps.begin(), reps.end()) << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}