#include <iostream>
#include <algorithm>
#include <vector>
#include <chrono>
#include <random>
#include <fstream>
#include "sort.hpp"

void createVect(std::vector<int>& arr, int size, unsigned int seed) {
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    std::shuffle(arr.begin(), arr.end(), std::default_random_engine(seed));
};

void timeInsert(std::vector<int> arr) {
    std::fstream results;
    results.open("results.csv", std::ios::out | std::ios::app);

    auto start = std::chrono::high_resolution_clock::now();
    insertionSort(arr);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    results << "Insertion Sort: " << duration.count() << " secs. ";
    results.close();
};

void timeQuick(std::vector<int> arr) {
    std::fstream results;
    results.open("results.csv", std::ios::out | std::ios::app);

    auto start = std::chrono::high_resolution_clock::now();
    quickSort(arr);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    results << "QuickSort: " << duration.count() << " secs. " << "\n";
    results.close();
};

void runTest(std::vector<int>& arr, int pos, unsigned int seed) {
    std::vector<int> testArr(arr.at(pos));

    std::fstream results;
    results.open("results.csv", std::ios::out | std::ios::app);
    results << pos << ". ";
    results.close();

    createVect(testArr, testArr.size(), seed);
    timeInsert(testArr);
    timeQuick(testArr);
};

int main() {
    // Define problem sizes (array sizes) for analysis
    std::vector<int> problemSizes = {100, 500, 1000, 5000, 10000, 50000};

    // Seed for reproducible shuffling
    unsigned int seed = 69;

    for (int i = 0; i < problemSizes.size(); i++) {
        runTest(problemSizes, i, seed);
    }

    std::cout << "Runtime data saved to results.csv" << std::endl;

    return 0;
}
