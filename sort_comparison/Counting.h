#pragma once
#include <algorithm>
#include <ranges>
#include <vector>

class Counting {
 public:
  static void sort(std::vector<int>& arr) {
    if (arr.empty())
      return;

    const auto min_element = *std::ranges::min_element(arr);
    const auto max_element = *std::ranges::max_element(arr);
    const auto range = max_element - min_element + 1;

    std::vector<int> count(range, 0);

    for (const auto x : arr)
      count[x - min_element]++;

    int arr_idx = 0;
    for (int i = 0; i < range; i++) {
      while (count[i] > 0) {
        arr[arr_idx] = i + min_element;
        arr_idx++;
        count[i]--;
      }
    }
  }
};
