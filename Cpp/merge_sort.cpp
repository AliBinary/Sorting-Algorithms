#include "sort_algorithms.h"
#include <vector>

std::vector<int> merge2(std::vector<int> l_list, std::vector<int> r_list)
{
    std::vector<int> result;
    int l_index = 0, r_index = 0;

    int n_l = l_list.size(), n_r = r_list.size();
    for (int i = 0; i < n_l + n_r; i++)
    {
        if (l_index < n_l && r_index < n_r)
        {
            if (l_list[l_index] <= r_list[r_index])
            {
                result.push_back(l_list[l_index]);
                l_index += 1;
            }
            else
            {
                result.push_back(r_list[r_index]);
                r_index += 1;
            }
        }
        else if (l_index == n_l)
        {
            result.push_back(r_list[r_index]);
            r_index += 1;
        }
        else if (r_index == n_r)
        {
            result.push_back(l_list[l_index]);
            l_index += 1;
        }
    }

    return result;
}

std::vector<int> merge_sort(std::vector<int> array)
{
    int n = array.size();
    if (n <= 1)
        return array;

    int mid = n / 2;

    std::vector<int> l_list = merge_sort(std::vector<int>(array.begin(), array.begin() + mid));
    std::vector<int> r_list = merge_sort(std::vector<int>(array.begin() + mid, array.end()));

    return merge2(l_list, r_list);
}
