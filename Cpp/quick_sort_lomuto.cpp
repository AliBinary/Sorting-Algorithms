#include "sort_algorithms.h"
#include <vector>
#include <algorithm>

int partition_Lomuto(std::vector<int> &array, int low, int high)
{
    int pivot = array[high];
    int i = low;
    int j = low;
    while (j < high)
    {
        if (array[j] <= pivot)
        {
            std::swap(array[i], array[j]);
            i += 1;
        }
        j += 1;
    }
    std::swap(array[i], array[high]);
    return i;
}

void quick_sort_Lomuto_helper(std::vector<int> &items, int low, int high)
{
    if (low < high)
    {
        int split_point = partition_Lomuto(items, low, high);
        quick_sort_Lomuto_helper(items, low, split_point - 1);
        quick_sort_Lomuto_helper(items, split_point + 1, high);
    }
}

std::vector<int> quick_sort_Lomuto(std::vector<int> array)
{
    quick_sort_Lomuto_helper(array, 0, array.size() - 1);
    return array;
}
