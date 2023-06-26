#pragma once
#include <execution>
#include <vector>

class Merge {
  static void merge(std::vector<int>& arr, int low, int mid, int high);

  static void merge_sort(std::vector<int>& arr, int low, int high);

 public:
  static void sort(std::vector<int>& arr);
};
