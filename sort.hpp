#ifndef SORT_HPP
#define SORT_HPP

#include <vector>
#include <algorithm>

// Insertion Sort Algorithm
// Array is sorted in-place
// A vector of integers is passed by reference
void insertionSort(std::vector<int>& arr);

// Quicksort Algorithm
// Array is sorted in-place
// A vector of integers is passed by reference
void quickSort(std::vector<int>& arr);

#endif // SORT_HPP
