#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> config = {1, 0, 1, 0};
  int n = config.size();
  int flip = 0, cost = 0;
  for (int i = 0; i < n; i++) {
    if (flip % 2 == 1) {
      if (config[i] == 1) {
        flip++;
        cost++;
      }
    } else {
      if (config[i] == 0) {
        cost++;
        flip++;
      }
    }
  }
  cout << cost << endl;
  return 0;
}