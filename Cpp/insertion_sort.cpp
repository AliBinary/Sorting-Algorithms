#include "sort_algorithms.h"
#include <vector>

std::vector<int> insertion_sort(std::vector<int> array)
{
    int n = array.size();
    for (int i = 1; i < n; i++)
    {
        int picked_item = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > picked_item)
        {
            array[j + 1] = array[j];
            j -= 1;
        }
        array[j + 1] = picked_item;
    }
    return array;
}