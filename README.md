# Sorting Algorithms Project

This project contains the implementation of 7 different sorting algorithms written in C++. The following sorting algorithms are implemented:

1. **Bubble Sort**
2. **Selection Sort**
3. **Insertion Sort**
4. **Merge Sort**
5. **Heap Sort**
6. **Quick Sort (Hoare Partitioning)**
7. **Quick Sort (Lomuto Partitioning)**


## Time Complexity of Algorithms

| Algorithm            | Best Case    | Average Case  | Worst Case    | Space Complexity |
|----------------------|--------------|---------------|---------------|------------------|
| **Bubble Sort**       | O(n)         | O(n^2)        | O(n^2)        | O(1)             |
| **Selection Sort**    | O(n^2)       | O(n^2)        | O(n^2)        | O(1)             |
| **Insertion Sort**    | O(n)         | O(n^2)        | O(n^2)        | O(1)             |
| **Merge Sort**        | O(n log n)   | O(n log n)    | O(n log n)    | O(n)             |
| **Heap Sort**         | O(n log n)   | O(n log n)    | O(n log n)    | O(1)             |
| **Quick Sort (Hoare)**| O(n log n)   | O(n log n)    | O(n^2)        | O(log n)         |
| **Quick Sort (Lomuto)**| O(n log n)  | O(n log n)    | O(n^2)        | O(log n)         |

## Project Directory Structure

```
Sorting-Algorithms-Project/
│
├── bubble_sort.cpp        # Bubble Sort implementation in C++
├── selection_sort.cpp     # Selection Sort implementation in C++
├── insertion_sort.cpp     # Insertion Sort implementation in C++
├── merge_sort.cpp         # Merge Sort implementation in C++
├── heap_sort.cpp          # Heap Sort implementation in C++
├── quick_sort_Hoare.cpp   # Quick Sort (Hoare Partitioning) implementation in C++
├── quick_sort_Lomuto.cpp  # Quick Sort (Lomuto Partitioning) implementation in C++
├── sort_algorithms.h      # Function declarations for sorting algorithms
└── main.cpp               # Main file to run the algorithms and display results
```

## Animations

For better understanding and learning, you can pay attention to the animations of each of the sorting algorithms:

![Bubble Sort Animation: ](https://cdn.emre.me/sorting/bubble_sort.gif)
---
![Selection Sort Animation: ](https://cdn.emre.me/sorting/selection_sort.gif)
---
![Insertion Sort Animation: ](https://cdn.emre.me/sorting/insertion_sort.gif)
---
![Merge Sort Animation: ](https://cdn.emre.me/sorting/merge_sort.gif)
---
![Heap Sort Animation: ](https://cdn.emre.me/sorting/heap_sort.gif)
---
![Quick Sort (Hoare): ](https://cdn.emre.me/sorting/quick_sort_hoare.gif)
---
![Quick Sort (Lomuto): ](https://cdn.emre.me/sorting/quick_sort_lomuto.gif)

## How to Run

To run the project, follow the steps below:

### 1. Compile the Program:

First, you need to compile all the `.cpp` files. Use the following command to compile the program:

```bash
g++ -o sorting_program main.cpp bubble_sort.cpp selection_sort.cpp insertion_sort.cpp merge_sort.cpp heap_sort.cpp quick_sort_Hoare.cpp quick_sort_Lomuto.cpp
```

This command compiles all the `.cpp` files and generates an executable file named `sorting_program`.

### 2. Run the Program:

After compiling, run the program using the following command:

```bash
./sorting_program
```

The program will execute all sorting algorithms on a sample array and print the sorted results to the console.

## Adding New Algorithms

If you want to add new sorting algorithms to this project, follow these steps:
```
1. Implement the new algorithm in a new .cpp file (e.g., new_sort_algorithm.cpp).
2. Add the function declaration to the sort_algorithms.h header file.
3. Include the new .cpp file in the g++ compile command.
4. Optionally, you can modify the main.cpp file to include and test your new algorithm.
```
Feel free to contribute and extend the project by adding more sorting algorithms or improving existing ones!

## Additional Information

This project was created to demonstrate and explore various sorting algorithms and how they are implemented in C++. You can extend this code and add more algorithms as needed.
