# Sorting Algorithms 🌟

Welcome to the Sorting Algorithms Repository, a comprehensive collection of the most commonly used sorting algorithms implemented in both C++ and Python. Whether you're a beginner looking to understand sorting or an experienced developer wanting to compare performance and implementation, this repository is the perfect resource.

## Features ✨

* Multiple Sorting Algorithms: Includes 7 different sorting algorithms such as Bubble Sort, Selection Sort, Merge Sort, Heap Sort, Quick Sort, and more.
* C++ & Python Implementations: Each algorithm is implemented in both C++ and Python, allowing you to explore different programming paradigms and environments.
* Clear Animations: Visual animations for each sorting algorithm to help you grasp the logic behind each one.
* Optimized Code: Carefully crafted to showcase different techniques and approaches to solving the same problem.
* Easy to Extend: Easily add new algorithms or modify existing ones with minimal setup.

## Algorithms Implemented 🚀

**1. Bubble Sort**

**2. Selection Sort**

**3. Insertion Sort**

**4. Merge Sort**

**5. Heap Sort**

**6. Quick Sort (Hoare Partitioning)**

**7. Quick Sort (Lomuto Partitioning)**

## Key Features 🌱

* Educational Focus: Perfect for students, programmers, and algorithm enthusiasts who want to learn and understand the workings of sorting algorithms.

* Cross-Language Comparison: Compare the performance and implementation style of sorting algorithms in two widely used programming languages, C++ and Python.

* License: Distributed under the MIT License, allowing you to freely use, modify, and share this project.


## Time Complexity of Algorithms ⏳

| Algorithm            | Best Case    | Average Case  | Worst Case    | Space Complexity |
|----------------------|--------------|---------------|---------------|------------------|
| **Bubble Sort**       | O(n)         | O(n^2)        | O(n^2)        | O(1)             |
| **Selection Sort**    | O(n^2)       | O(n^2)        | O(n^2)        | O(1)             |
| **Insertion Sort**    | O(n)         | O(n^2)        | O(n^2)        | O(1)             |
| **Merge Sort**        | O(n log n)   | O(n log n)    | O(n log n)    | O(n)             |
| **Heap Sort**         | O(n log n)   | O(n log n)    | O(n log n)    | O(1)             |
| **Quick Sort (Hoare)**| O(n log n)   | O(n log n)    | O(n^2)        | O(log n)         |
| **Quick Sort (Lomuto)**| O(n log n)  | O(n log n)    | O(n^2)        | O(log n)         |

## Animations ▶️

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

## Project Directory Structure 🗂️

```
Sorting-Algorithms-Project/
│
├── Cpp/                   # C++ implementation folder
│   ├── bubble_sort.cpp    # Bubble Sort implementation in C++
│   ├── selection_sort.cpp # Selection Sort implementation in C++
│   ├── insertion_sort.cpp # Insertion Sort implementation in C++
│   ├── merge_sort.cpp     # Merge Sort implementation in C++
│   ├── heap_sort.cpp      # Heap Sort implementation in C++
│   ├── quick_sort_Hoare.cpp # Quick Sort (Hoare Partitioning) implementation in C++
│   ├── quick_sort_Lomuto.cpp # Quick Sort (Lomuto Partitioning) implementation in C++
│   └── sort_algorithms.h  # Function declarations for sorting algorithms
│   └── main.cpp  # Main C++ file to run all sorting algorithms
│
├── Python/                # Python implementation folder
│   ├── bubble_sort.py     # Bubble Sort implementation in Python
│   ├── selection_sort.py  # Selection Sort implementation in Python
│   ├── insertion_sort.py  # Insertion Sort implementation in Python
│   ├── merge_sort.py      # Merge Sort implementation in Python
│   ├── heap_sort.py       # Heap Sort implementation in Python
│   ├── quick_sort_hoare.py# Quick Sort (Hoare Partitioning) implementation in Python
│   ├── quick_sort_lomuto.py # Quick Sort (Lomuto Partitioning) implementation in Python
│   └── main.py            # Main Python file to run all sorting algorithms
│
├── .gitignore             # Git ignore file to exclude unwanted files from version control
├── LICENSE                # MIT License file
├── main.cpp               # Main file to run the C++ algorithms and display results
└── README.md              # Project README file
```

## How to Run (C++ Files) 🤔

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

## How to Run (Python Files) 🤔

If you want to run all algorithms using Python, navigate to the Python/ folder and run the main.py file, which will execute all sorting algorithms:

```
python3 Python/main.py
```

The main.py file will run each algorithm on a sample array and display the sorted results.

## Adding New Algorithms 🤝

If you want to add new sorting algorithms to this project, follow these steps:
For C++:

```
1. Implement the new algorithm in a new .cpp file (e.g., new_sort_algorithm.cpp).
2. Add the function declaration to the cpp/sort_algorithms.h header file.
3. Include the new .cpp file in the g++ compile command in README.md.
4. Optionally, modify main.cpp to include and test your new algorithm.
```

For Python:

```
1. Implement the new algorithm in a new .py file (e.g., new_sort_algorithm.py).
2. Import the new algorithm in python/main.py so it can be executed.
3. Optionally, modify main.py to test the new algorithm with a sample array.
```

Feel free to contribute by adding new sorting algorithms or improving the existing ones!

## Additional Information 🌱

This repository was created to demonstrate and review various sorting algorithms and how to implement them in C++ and Python. You can expand this code for various applications and add more algorithms if needed.
