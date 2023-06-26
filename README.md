
# Sort comparison

This project is intended to deeply compare the performance of most-used sorting algorithm. Algorithms that have been compared include:

- std::sort
- std::stable_sort

And also custom implementations:

- Heap sort
- Quicksort (pivot selection by the median of 3)
- Merge sort
- Counting sort
- Bucket sort


## Tech Stack

**Compiler:** MSVC C++20, release config

## Results

The provided data represents the execution times of various sorting algorithms on the task of sorting 1 million random integers from the interval <-1000000, 1000000>. The data includes multiple repetitions (1-10) for each algorithm, as well as additional metrics for analysis.

**1.** ``std::sort``
- Average Execution Time: 107.8 millisecond
- Relative Performance: This algorithm serves as the baseline with a ratio of 1.000.
- Performance Range: The best execution time among the repetitions is 98 millisecond, while - the worst is 129 millisecond.
- Variability: The worst execution time is about 19.67% higher than the average, while the best execution time is about 9.09% lower than the average.

**2.** ``std::stable_sort``
- Average Execution Time: 109.1 millisecond
- Relative Performance: This algorithm has a slightly higher average execution time - compared to std::sort (ratio of 1.012).
- Performance Range: The best execution time is 100 millisecond, while the worst is 143 millisecond.
- Variability: The worst execution time is approximately 31.07% higher than the average, and the best execution time is about 8.34% lower than the average.

**3.** ``heap sort``
- Average Execution Time: 336.4 millisecond
- Relative Performance: This algorithm is significantly slower than `std::sort` (ratio of 3.121).
- Performance Range: The best execution time is 281 millisecond, while the worst is 403 millisecond.
- Variability: The worst execution time is roughly 19.80% higher than the average, and the best execution time is approximately 16.47% lower than the average.

**4.** ``quick sort (median of 3)``
- Average Execution Time: 203.3 millisecond
- Relative Performance: This algorithm performs slightly slower than std::sort (ratio of 1.886)
- Performance Range: The best execution time is 147 millisecond, while the worst is 275 millisecond.
- Variability: The worst execution time is about 35.27% higher than the average, and the best execution time is approximately 27.69% lower than the average.

**5.** ``merge sort``
- Average Execution Time: 440.4 millisecond
- Relative Performance: This algorithm has decently high average execution time among the tested algorithms (ratio of 4.085).
- Performance Range: The best execution time is 391 millisecond, while the worst is 476 millisecond.
- Variability: The worst execution time is roughly 8.08% higher than the average, and the best execution time is about 11.22% lower than the average.

**6.** ``counting sort``
- Average Execution Time: 28.5 millisecond
- Relative Performance: This algorithm significantly outperforms the others with a much lower average execution time (ratio of 0.264).
- Performance Range: The best execution time is 21 millisecond, while the worst is 44 millisecond.
- Variability: The worst execution time is about 54.39% higher than the average, and the best execution time is approximately 26.32% lower than the average.

**7.** ``bucket sort``
- Average Execution Time: 467.7 millisecond
- Relative Performance: This algorithm is the slowest of all (ratio of 4.339).
- Performance Range: The best execution time is 428 millisecond, while the worst is 512 millisecond.
- Variability: The worst execution time is roughly 9.47% higher than the average, and the best execution time is about 8.49% lower than the average.

Based on this data, counting sort stands out as the most efficient algorithm for sorting the given dataset, providing the lowest average execution time. std::sort and std::stable_sort from the standard library also perform reasonably well, while heap sort, merge sort, and bucket sort exhibit higher execution times.


Here are useful charts which help interpret the text:
![Image Alt Text](/charts/avg_after_10.png)
![Image Alt Text](/charts/worst_best_after_10.png)
![Image Alt Text](/charts/worst_best_as_percent.png)

