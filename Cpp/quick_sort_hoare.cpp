#include "sort_algorithms.h"
#include <vector>
#include <algorithm>

int partition_Hoare(std::vector<int> &array, int low, int high)
{
    int pivot = array[(low + high) / 2];
    int i = low - 1;
    int j = high + 1;
    while (true)
    {
        i += 1;
        while (array[i] < pivot)
            i += 1;

        j -= 1;
        while (array[j] > pivot)
            j -= 1;

        if (i >= j)
            return j;

        std::swap(array[i], array[j]);
    }
}

void quick_sort_Hoare_helper(std::vector<int> &items, int low, int high)
{
    if (low < high)
    {
        int split_point = partition_Hoare(items, low, high);
        quick_sort_Hoare_helper(items, low, split_point);
        quick_sort_Hoare_helper(items, split_point + 1, high);
    }
}

std::vector<int> quick_sort_Hoare(std::vector<int> array)
{
    quick_sort_Hoare_helper(array, 0, array.size() - 1);
    return array;
}
