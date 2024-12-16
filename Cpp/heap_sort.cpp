#include "sort_algorithms.h"
#include <vector>
#include <algorithm>

int get_left_child(int i)
{
    return 2 * i + 1;
}

int get_right_child(int i)
{
    return 2 * i + 2;
}

void max_heapify(std::vector<int> &arr, int n, int i)
{
    int left = get_left_child(i);
    int right = get_right_child(i);
    int largest = i;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        std::swap(arr[i], arr[largest]);
        max_heapify(arr, n, largest);
    }
}

std::vector<int> heap_sort(std::vector<int> arr)
{
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        max_heapify(arr, n, i);

    for (int i = n - 1; i >= 1; i--)
    {
        std::swap(arr[i], arr[0]);
        max_heapify(arr, i, 0);
    }

    return arr;
}
