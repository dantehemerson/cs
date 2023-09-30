#include<bits/stdc++.h>


/**

Suppose we had to sort an array A[p...r].

### Divide

If q is the half-way point between p and r, then we can split the subarray A[p..r] into two arrays A[p..q] and A[q+1, r].

### Conquer

In the conquer step, we try to sort both the subarrays A[p..q] and A[q+1, r]. If we haven't yet reached the base case, we again divide both these subarrays and try to sort them.

### Combine (the merge funtion)

When the conquer step reaches the base step and we get two sorted subarrays A[p..q] and A[q+1, r] for array A[p..r], we combine the results by creating a sorted array A[p..r] from two sorted subarrays A[p..q] and A[q+1, r].


```
MergeSort(A, p, r):  // starts at: MergeSort(A, 0, length(A) - 1)
    if p > r
        return
    q = (p+r)/2
    mergeSort(A, p, q)
    mergeSort(A, q+1, r)
    merge(A, p, q, r)
```
*/

vector<int> mergeSort(vector<int>& arr) {


  return {};
}

void merge(vector<int>&arr, int p, int q, int r) {
  vector<int> left(arr.begin() + p, arr.begin() + q + 1);
  vector<int> right(arr.begin() + q + 1, arr.begin() + r + 1);

  int i  = 0, j = 0, k = 0;

  while (i < left.size() && j < right.size()) {
    if (left[i] < right[j]) {
      arr[k] = left[i];
      i++;
    } else {
      arr[k] =  right[j];
      j++;
    }

    k++;
  }

  while(i < left.size()) {
    arr[k] = left[i];
    i++;
    k++;
  }

  while(j < right.size()) {
    arr[k] = right[j];
    j++;
    k++;
  }
}



int main() {
  // vector<int> arr = {
  //   100,
  //   12,
  //   -10,
  //   14,
  //   15,
  //   16,
  //   17,
  //   2434,
  //   543434343,
  //   3400,
  //   -2
  // };


  vector<int> arr = {1, 4, 5, 1, 3, 4};


  // auto result = mergeSort(arr);
  merge(arr, 0, 4, 5);

  cout << "Sorted array: " << endl;
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
}

