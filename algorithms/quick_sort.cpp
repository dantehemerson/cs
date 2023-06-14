#include <bits/stdc++.h>

vector<int> quickSort(vector<int>& arr) {
  if (arr.size() <= 1) return arr;

  int pivot = arr[0];
  vector<int> left, right;

  for (int i = 1; i < arr.size(); i++) {
    if(arr[i] < pivot) left.push_back(arr[i]);
    else right.push_back(arr[i]);
  }

  vector<int> sortedLeft = quickSort(left);
  vector<int> sortedRight = quickSort(right);

  vector<int> sorted;
  sorted.insert(sorted.end(), sortedLeft.begin(), sortedLeft.end()); // Left
  sorted.insert(sorted.end(), pivot); // Pivot
  sorted.insert(sorted.end(), sortedRight.begin(), sortedRight.end()); // Right

  return sorted;
}


int main() {
  vector<int> unordered302Items = {
    12,
    14,
    15,
    16,
    17,
    2434,
    543434343,
    3400,
    -2
  };

  vector<int> ordered = quickSort(unordered302Items);

  for (int i = 0; i < ordered.size(); i++) {
    cout << ordered[i] << " ";
  }

  cout << endl;

  return 0;
}
