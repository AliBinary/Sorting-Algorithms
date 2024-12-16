#include "sort_algorithms.h"
#include <vector>
#include <algorithm>

std::vector<int> selection_sort(std::vector<int> array)
{
    int n = array.size();
    for (int i = 0; i < n; i++)
    {
        int min_value = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min_value])
                min_value = j;
        }
        std::swap(array[i], array[min_value]);
    }
    return array;
}
