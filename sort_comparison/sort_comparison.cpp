#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>

#include "Counting.h"
#include "arr.h"
#include "bucket.h"
#include "heap.h"
#include "merge.h"
#include "quick.h"

using std::cout, std::endl;

using clk = std::chrono::high_resolution_clock;
using ms = std::chrono::milliseconds;

void print_ms(const std::chrono::time_point<std::chrono::steady_clock>& t1,
              const std::chrono::time_point<std::chrono::steady_clock>& t2) {
  cout << std::abs(std::chrono::duration_cast<ms>(t2 - t1).count()) << "ms"
       << endl;
}

int main() {
  std::vector<int> arr_base;
  Arr::fill_in_order(arr_base);

  // std sort
  std::vector arr1 = arr_base;
  const auto std_sort_begin = clk::now();

  std::ranges::sort(arr1);

  const auto std_sort_end = clk::now();
  cout << "========== std::sort ==========" << endl;
  print_ms(std_sort_end, std_sort_begin);

  // std stable sort
  std::vector arr2 = arr_base;
  const auto std_stable_sort_begin = clk::now();

  std::ranges::stable_sort(arr2);

  const auto std_stable_sort_end = clk::now();
  cout << "========== std::stable_sort ==========" << endl;
  print_ms(std_stable_sort_end, std_stable_sort_begin);

  // Heap sort
  std::vector arr3 = arr_base;
  const auto heap_sort_begin = clk::now();

  Heap::sort(arr3);

  const auto heap_sort_end = clk::now();
  cout << "========== custom heap sort ==========" << endl;
  print_ms(heap_sort_end, heap_sort_begin);

  // Quick sort
  std::vector arr4 = arr_base;
  const auto quick_sort_begin = clk::now();

  Quick::sort(arr4);

  const auto quick_sort_end = clk::now();
  cout << "========== custom quick sort (median of 3)04 ==========" << endl;
  print_ms(quick_sort_end, quick_sort_begin);

  // merge sort
  std::vector arr5 = arr_base;
  const auto merge_sort_begin = clk::now();

  Merge::sort(arr5);

  const auto merge_sort_end = clk::now();
  cout << "========== custom merge sort ==========" << endl;
  print_ms(merge_sort_end, merge_sort_begin);

  // Counting sort
  std::vector arr6 = arr_base;
  const auto c_sort_begin = clk::now();

  Counting::sort(arr6);

  const auto c_sort_end = clk::now();

  cout << "========== custom counting sort ==========" << endl;
  print_ms(c_sort_end, c_sort_begin);

  // Bucket sort
  std::vector arr7 = arr_base;
  const auto b_sort_begin = clk::now();

  Bucket::sort(arr7);

  const auto b_sort_end = clk::now();
  cout << "========== custom bucket sort (bucket count = sqrt(n) =========="
       << endl;
  print_ms(b_sort_end, b_sort_begin);

  return 0;
}
