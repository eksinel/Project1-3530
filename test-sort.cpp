#include <algorithm>
#include <cassert>
#include <iostream>
#include <random>
#include <vector>

#include "sort.hpp"

using namespace std;

int main() {
  // Test sorting algorithms for correctness
  unsigned int size = 2000;
  unsigned int seed = 42;

  // Test insertion sort
  vector<int> insertionArr(size);  // Your input data here
  for (int i = 0; i < size; ++i) insertionArr[i] = i + 1;
  shuffle(insertionArr.begin(), insertionArr.end(),
               default_random_engine(seed));

  insertionSort(insertionArr);
  cout << "Insertion sort complete. Checking correctness ..." << endl;
  assert(is_sorted(insertionArr.begin(), insertionArr.end()));

  // Test quicksort
  vector<int> quickArr(size);  // Your input data here
  for (int i = 0; i < size; ++i) quickArr[i] = i + 1;
  shuffle(quickArr.begin(), quickArr.end(),
               default_random_engine(seed));

  quickSort(quickArr);
  cout << "Quicksort complete. Checking correctness ..." << endl;
  assert(is_sorted(quickArr.begin(), quickArr.end()));

  cout << "Sorting algorithms validated." << endl;

  return 0;
}
