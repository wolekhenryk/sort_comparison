#include "arr.h"

void Arr::fill(std::vector<int>& v) {
  std::random_device rd;
  std::mt19937 rng(rd());
  std::uniform_int_distribution dist(0 - MAX_ARR_SIZE, MAX_ARR_SIZE);

  for (int i = 0; i < MAX_ARR_SIZE; i++)
    v.push_back(dist(rng));
}

void Arr::fill_descending(std::vector<int>& v) {
  for (int i = MAX_ARR_SIZE; i >= 0; i--)
    v.push_back(i);
}

void Arr::fill_in_order(std::vector<int>& v) {
  for (int i = 0; i < MAX_ARR_SIZE; i++)
    v.push_back(i);
}
