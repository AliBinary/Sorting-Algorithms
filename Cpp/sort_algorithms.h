#ifndef SORT_ALGORITHMS_H
#define SORT_ALGORITHMS_H

#include <vector>

std::vector<int> bubble_sort(std::vector<int> array);
std::vector<int> selection_sort(std::vector<int> array);
std::vector<int> insertion_sort(std::vector<int> array);
std::vector<int> merge_sort(std::vector<int> array);
std::vector<int> heap_sort(std::vector<int> arr);
std::vector<int> quick_sort_Hoare(std::vector<int> array);
std::vector<int> quick_sort_Lomuto(std::vector<int> array);

#endif
