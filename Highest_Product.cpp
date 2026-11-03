#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> arr = {-5, -1, -2, 0, 3, 4, 5, 0};
  int n = arr.size();
  sort(arr.begin(), arr.end());
  int l1 = arr[0], l2 = arr[1];
  int h1 = arr[n - 1], h2 = arr[n - 2], h3 = arr[n - 3];
  cout << max(l1 * l2 * h1, h1 * h2 * h3);
  return 0;
}