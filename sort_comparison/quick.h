#pragma once
#include <chrono>
#include <random>

class Quick {
  static int partition(std::vector<int>& arr, const int low, const int high);

  static int median_of_three(const std::vector<int>& arr,
                             const int a,
                             const int b,
                             const int c);

  static void quick_sort(std::vector<int>& arr, const int low, const int high);

 public:
  static void sort(std::vector<int>& arr);
};
