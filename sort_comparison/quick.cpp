#include "quick.h"

int Quick::partition(std::vector<int>& arr, const int low, const int high) {
  const int mid = low + (high - low) / 2;
  const int pivot_index = median_of_three(arr, low, mid, high);
  const int pivot = arr[pivot_index];

  std::swap(arr[pivot_index], arr[high]);

  int i = low - 1;

  for (int j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      std::swap(arr[i], arr[j]);
    }
  }

  std::swap(arr[i + 1], arr[high]);
  return i + 1;
}

int Quick::median_of_three(const std::vector<int>& arr,
                           const int a,
                           const int b,
                           const int c) {
  const int val_a = arr[a];
  const int val_b = arr[b];
  const int val_c = arr[c];

  if (val_a < val_b) {
    if (val_b < val_c)
      return b;
    else if (val_a < val_c)
      return c;
    else
      return a;
  } else {
    if (val_a < val_c)
      return a;
    else if (val_b < val_c)
      return c;
    else
      return b;
  }
}

void Quick::quick_sort(std::vector<int>& arr, const int low, const int high) {
  if (low < high) {
    const int pivot_idx = partition(arr, low, high);
    quick_sort(arr, low, pivot_idx - 1);
    quick_sort(arr, pivot_idx + 1, high);
  }
}

void Quick::sort(std::vector<int>& arr) {
  quick_sort(arr, 0, arr.size() - 1);
}
