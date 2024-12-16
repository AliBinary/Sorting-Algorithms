#include "sort_algorithms.h"
#include <vector>
#include <algorithm>

std::vector<int> bubble_sort(std::vector<int> array)
{
    bool swapped = true;
    int n = array.size();
    while (swapped)
    {
        swapped = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                std::swap(array[i], array[i + 1]);
                swapped = true;
            }
        }
    }
    return array;
}