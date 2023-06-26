#pragma once

#include <algorithm>
#include <cmath>
#include <list>
#include <ranges>
#include <vector>

class Bucket {
  static void bucket_sort(std::vector<int>& arr, const int num_buckets) {
    std::vector<std::list<int>> buckets(num_buckets);

    auto [min_value, max_value] = std::ranges::minmax_element(arr);
    const int range = *max_value - *min_value + 1;

    for (const auto& element : arr) {
      const int bucket_index = (element - *min_value) * num_buckets / range;
      buckets[bucket_index].push_back(element);
    }

    for (auto& bucket : buckets) {
      bucket.sort();
    }

    int index = 0;
    for (auto& bucket : buckets) {
      for (const auto& element : bucket) {
        arr[index] = element;
        index++;
      }
    }
  }

 public:
  static void sort(std::vector<int>& arr) {
    bucket_sort(arr, static_cast<int>(sqrt(arr.size())));
  }
};
