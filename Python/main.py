from bubble_sort import bubble_sort
from selection_sort import selection_sort
from insertion_sort import insertion_sort
from merge_sort import merge_sort
from quick_sort_hoare import quick_sort_hoare
from quick_sort_lomuto import quick_sort_lomuto
from heap_sort import heap_sort


def print_array(arr):
    print('\t', ' '.join(map(str, arr)))


def main():
    array = [16, 19, 28, 20, 42, 44, 23, 4, 3, 33]

    print("Array:", array)

    # Bubble sort
    print("\nBubble sort:")
    print_array(bubble_sort(array.copy()))

    # Selection sort
    print("\nSelection sort:")
    print_array(selection_sort(array.copy()))

    # Insertion sort
    print("\nInsertion sort:")
    print_array(insertion_sort(array.copy()))

    # Merge sort
    print("\nMerge sort:")
    print_array(merge_sort(array.copy()))

    # Quick sort with Hoare partition
    print("\nQuick sort (Hoare partition):")
    print_array(quick_sort_hoare(array.copy(), 0, len(array) - 1))

    # Quick sort with Lomuto partition
    print("\nQuick sort (Lomuto partition):")
    print_array(quick_sort_lomuto(array.copy(), 0, len(array) - 1))

    # Heap sort
    print("\nHeap sort:")
    print_array(heap_sort(array.copy()))
    print()


if __name__ == "__main__":
    main()
