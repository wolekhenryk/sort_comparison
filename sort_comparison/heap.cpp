#include "heap.h"

#include <algorithm>
#include <vector>

void Heap::heapify(std::vector<int>& arr, const int n, int i) {
  while (true) {
    int largest = i;
    const int left = 2 * i + 1;
    const int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
      largest = left;
    if (right < n && arr[right] > arr[largest])
      largest = right;
    if (largest == i)
      break;

    std::swap(arr[i], arr[largest]);
    i = largest;
  }
}

void Heap::sort(std::vector<int>& arr) {
  const int n = arr.size();

  // Build heap (rearrange array)
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  // Extract elements from the heap one by one
  for (int i = n - 1; i > 0; i--) {
    std::swap(arr[0], arr[i]);

    // Heapify the reduced heap
    heapify(arr, i, 0);
  }
}
