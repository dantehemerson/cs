#include<bits/stdc++.h>
#include "../utils.h"


/**

Suppose we had to sort an array A[p...r].

### Divide

If q is the half-way point between p and r, then we can split the subarray A[p..r] into two arrays A[p..q] and A[q+1, r].

### Conquer (base case)

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

void merge(vector<int>& arr, int p, int q, int r) {
  vector<int> left(arr.begin() + p, arr.begin() + q + 1);
  vector<int> right(arr.begin() + q + 1, arr.begin() + r + 1);

  int i  = 0, j = 0, k = p;

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

void mergeSort(vector<int>& arr, int p, int r) {
  if (p >=  r) return;

  // printArray(arr);

  int mid = p + (r - p) / 2;

  cout << "before: array = " << p << " * " << r  << "     mid = " << mid << endl;

  mergeSort(arr, p, mid);
  mergeSort(arr, mid + 1, r);


  cout << "after: array = " << p << " * " << r  << "     mid = " << mid << endl;

  merge(arr, p, mid, r);

  printArray(arr);
}

int main() {
  vector<int> arr = {
    100,
    12,
    3400,
    -2,
    129999,
    -1000
  };

  mergeSort(arr, 0, arr.size() - 1);

  printArray(arr);
}



