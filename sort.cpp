#include "sort.hpp"

void insertionSort(std::vector<int>& arr) 
{
    int swaps;
    int size = arr.size();
    while (true) {
        swaps = 0;
        for (int i = 1; i < size; i++) {
            if (arr[i-1] > arr[i]) {
                std::swap(arr[i], arr[i - 1]);
                swaps++;
            }
        }
        if (swaps == 0) {
            break;
        }
    }
}

int partition(std::vector<int>& arr, int front, int end) {
    int temp;
    int pos = front;
    for (int i = front; i < end; i++) {
        if (arr.at(i) < arr.at(end)) {
            temp = arr.at(i);
            arr[i] = arr.at(pos);
            arr[pos] = temp;
            pos++;
        }
    }
    temp = arr.at(end);
    arr[end] = arr.at(pos);
    arr[pos] = temp;
    return pos;
};

void quickSortRecurs(std::vector<int>& arr, int front, int end) {
    if (front < end) {
        int pos = partition(arr, front, end);
        quickSortRecurs(arr, front, pos-1);
        quickSortRecurs(arr, pos+1, end);
    }
};

void quickSort(std::vector<int>& arr) 
{
    int end = arr.size()-1;
    int pos = partition(arr, 0, end);
    quickSortRecurs(arr, 0, pos-1);
    quickSortRecurs(arr, pos+1, end);
}