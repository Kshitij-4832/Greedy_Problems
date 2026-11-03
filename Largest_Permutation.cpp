#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> arr = {3, 2, 4, 1, 5};
  int n = arr.size();
  int k = 3, Max = n ;
  unordered_map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    mpp[arr[i]] = i;
  }
  int i = 0;
  while (k != 0 && i < n) {
    int j = mpp[Max];
    if (i == j) {
      continue;
    } else {
      k--;
      swap(arr[i], arr[j]);
      swap(mpp[arr[i]], mpp[arr[j]]);
      Max--;
      i++;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}