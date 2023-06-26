#pragma once
#include <algorithm>
#include <random>
#include <vector>

constexpr int MAX_ARR_SIZE = 1000000;

constexpr int MID_ARR_SIZE = 10000;

class Arr {
 public:
  static void fill(std::vector<int>& v);

  static void fill_descending(std::vector<int>& v);

  static void fill_in_order(std::vector<int>& v);
};
