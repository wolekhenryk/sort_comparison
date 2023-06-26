#pragma once

#include <algorithm>
#include <vector>

class Heap {
  static void heapify(std::vector<int>& arr, const int n, const int i);

 public:
  static void sort(std::vector<int>& arr);
};
