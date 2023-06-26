#include "merge.h"

void Merge::merge(std::vector<int>& arr,
                  const int low,
                  const int mid,
                  const int high) {
  const auto n1 = mid - low + 1;
  const auto n2 = high - mid;

  std::vector<int> left(n1);
  std::vector<int> right(n2);

  for (int i = 0; i < n1; i++)
    left[i] = arr[low + i];
  for (int i = 0; i < n2; i++)
    right[i] = arr[mid + 1 + i];

  const auto left_begin = left.begin();
  const auto left_end = left.end();
  const auto right_begin = right.begin();
  const auto right_end = right.end();
  const auto arr_begin = arr.begin() + low;

  std::merge(std::execution::par, left_begin, left_end, right_begin, right_end,
             arr_begin);
}

void Merge::merge_sort(std::vector<int>& arr, const int low, const int high) {
  if (low < high) {
    const auto mid = low + (high - low) / 2;

    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);

    merge(arr, low, mid, high);
  }
}

void Merge::sort(std::vector<int>& arr) {
  merge_sort(arr, 0, arr.size() - 1);
}
