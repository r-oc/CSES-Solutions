#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m;
int vis[1010][1010];
char grid[1010][1010];
int neighborX[4] = {0, 0, 1, -1};
int neighborY[4] = {1, -1, 0, 0};

bool isValid (int y, int x) {
  if (y < 0) return false;
  if (x < 0) return false;
  if (y >= n) return false;
  if (x >= m) return false;
  if (grid[y][x] == '#') return false;
  return true;
}

void DFS (int y, int x) {
  vis[y][x] = 1;
  for (int i = 0 ; i < 4 ; i++) {
    int newX = x + neighborX[i];
    int newY = y + neighborY[i];
    if (isValid(newY, newX)) {
      if (!vis[newY][newX]) {
        DFS(newY, newX);
      }
    }
  }
}

void solve() {

    int count = 0; cin >> n; cin >> m;
    string temp;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            if(grid[i][j] == '.' && !vis[i][j]) {
                DFS(i, j);
                cout << endl;
                count++;
            }

        }
    }

    cout << count;

}

int main() {
    solve();
}