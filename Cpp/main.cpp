#include <bits/stdc++.h>
#include "sort_algorithms.h"
using namespace std;

// Function to print the array
void print_array(const vector<int> &array)
{
    for (int x : array)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> array = {16, 19, 28, 20, 42, 44, 23, 4, 3, 33};

    cout << "Array: ";
    print_array(array);

    // Bubble sort
    cout << "\nBubble sort: ";
    print_array(bubble_sort(array));

    // Selection sort
    cout << "\nSelection sort: ";
    print_array(selection_sort(array));

    // Insertion sort
    cout << "\nInsertion sort: ";
    print_array(insertion_sort(array));

    // Merge sort
    cout << "\nMerge sort: ";
    print_array(merge_sort(array));

    // Quick sort (Hoare partition)
    cout << "\nQuick sort (Hoare partition): ";
    print_array(quick_sort_Hoare(array));

    // Quick sort (Lomuto partition)
    cout << "\nQuick sort (Lomuto partition): ";
    print_array(quick_sort_Lomuto(array));

    // Heap sort
    cout << "\nHeap sort: ";
    print_array(heap_sort(array));
    cout << endl;

    return 0;
}
