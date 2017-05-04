# Learn Data Structure and Algorithms by C

> You need to have basic understanding of the C programming language to proceed with the codes from this repository.



## Table of Contents
- [Introduction to C](#introduction)
- [Data Structure](./Data%20Structure/)
  - [Linked List](./Data%20Structure/Linked%20List/)
  - [Stack](./Data%20Structure/Stack/)
  - [Queue](./Data%20Structure/Queue/)
  - [Binary Search Tree (BST)](./Data%20Structure/BST/)
  - Heap
  - Hash Table
  - Disjoint Set Union (Union Find)
  - Trie
  - Suffix Array
  - Segment Tree
  - Binary Indexed Tree (BIT)
  - Heavy Light Decomposition


- [Searching](./Searching/)
  - [Linear Search](./Searching/Linear%20Search/)
  - [Binary Search](./Searching/Binary%20Search/)
  - [Ternary Search](./Searching/Ternary%20Search/)


- [Sorting](./Sorting/)
  - [Selection Sort](./Sorting/Selection%20Sort/)
  - [Bubble Sort](./Sorting/Bubble%20Sort/)
  - [Insertion Sort](./Sorting/Insertion%20Sort/)
  - [Merge Sort](./Sorting/Merge%20Sort/)
  - [Quick Sort](./Sorting/Quick%20Sort/)
  - Bucket Sort
  - [Counting Sort](./Sorting/Counting%20Sort/)
  - Heap Sort
  - [Radix Sort](./Sorting/Radix%20Sort/)


- Graph Algorithms
    - Graph Representation
    - Breadth First Search (BFS)
    - Depth First Search (DFS)
    - Topological Sort
    - Strongly Connected Components (SCC)
    - Minimum Spanning Tree (MST)
    - All Pairs Shortest Path (Floyd Warshall's Algorithm)
    - Single Source Shortest Path Algorithm
        - Djkastra's Algorithm
        - Bellman Ford Algorithm
    - Directed Acyclic Graph
    - Bipartite Matching
    - Articulation Point, Bridge
    - Euler Tour/Path
    - Hamiltonian Cycle
    - Stable Marriage Problem
    - Chinese Postman Problem
    - 2-satisfiability
    - Flow Algorithms
        - Maximum Flow
        - Minimum Cut
        - Min-Cost Max Flow
        - Maximum Bipartite Matching
        - Vertex Cover

- Dynamic Programming
    - Rod Cutting
    - Maximum Sum (1D, 2D)
    - Coin Change
    - Longest Common Subsequence
    - Longest Increasing Subsequence
    - Matrix Multiplication
    - Edit Distance (Levenshtein distance)
    - 0/1 Knapsack
    - Travelling Salesman Problem
    - Optimal Binary Search Tree


- Greedy Algorithms
    - Activity Selection/Task Scheduling
    - Huffman Coding
    - Knapsack Problem (Fractional Knapsack)


- String Algorithms
    - Rabin-Karp Algorithm
    - Knuth-Morris-Pratt Algorithm
    - Z Algorithm
    - Aho-Korasick Algorithm
    - Manachers Algorithm
    - Boyr-Moore Algorithm


- Number Theory
    - Greatest Common Divisor (GCD)
    - Longest Common Multiplier (LCM)
    - Euler Totient (Phi)
    - Prime finding(Sieve of Eratosthenes)
    - Prime factorization
    - Factorial
    - Fibonacci
    - Counting, Permutation, combination
    - Exponentiation    
    - Big Mod
    - Euclid, Extended euclid
    - Josephus Problem
    - Farey Sequence
    - Catalan numbers
    - Burnside's lemma/circular permutation
    - Modular inverse
    - Probability
    - Chinese Remainder Theorem
    - Gaussian Elmination method
    - Dilworth's Theorem
    - Matrix Exponentiation


- Computational Geometry
    - Pick's Theorem
    - Convex hull
    - Line Intersection
    - Point in a polygon
    - Area of a polygon
    - Line Sweeping
    - Polygon intersection
    - Closest Pair


- Game Theory
    - Take Away Game
    - Nim's Game
    - Sprague-grundy Number

 - Others
    - BackTracking
        - N-Queen's Problem

---

## Introduction

The type system in C is static and weakly typed.  There are built-in types for integers of various sizes, both signed and unsigned, floating-point numbers, and enumerated types (enum). Integer type char is often used for single-byte characters. C99 added a boolean datatype (C99 added a builtin **_Bool** data type , and if you *#include <stdbool.h>*, it provides **bool** as a macro to **_Bool**.). There are also derived types including arrays, pointers, records (struct), and untagged unions (union).

### Primitive types and built-in data structures in C
C is a statically typed language. Each of the variables should be type casted.
There are five basic data types associated with variables:
- **int** - integer: a whole number.
- **float** - floating point value: i.e. a number with a fractional part.
- **double** - a double-precision floating point value.
- **char** - a single character.
- **void** - valueless special purpose type.

Other than these there are some derived data types. they are -
- **Arrays**
- **Pointers**
- **Structures**
- **Enumeration**

##### More details about data types in C:
- [C data types - Tutorialspoint](https://www.tutorialspoint.com/cprogramming/c_data_types.htm)
- [C programming data types - programiz](http://www.programiz.com/c-programming/c-data-types)

### Big-O Notation and Time Complexity Analysis

[Algorithms in plain English: time complexity and Big-O notation](https://medium.freecodecamp.com/time-is-complex-but-priceless-f0abd015063c)

[Big-O Cheat Sheet Link](http://bigocheatsheet.com/)

### How to Use
To test or use codes from this repository you can use any popular IDE, online Editor or compile them locally using GCC compiler.
Following links will help on how to compile a C code in linux.
- http://www.akira.ruc.dk/~keld/teaching/CAN_e14/Readings/How%20to%20Compile%20and%20Run%20a%20C%20Program%20on%20Ubuntu%20Linux.pdf
- http://www.cyberciti.biz/faq/howto-compile-and-run-c-cplusplus-code-in-linux/

###### TL;DR
Run following command to compile a C code (You need to have [gcc compiler](https://help.ubuntu.com/community/InstallingCompilers) installed):

`gcc file_name.c -o file_name`

you will get an executable named: `file-name`

run it using:

`./file_name`

### Useful Links:
* [Algorithms, 4th Edition (book by: Robert Sedgewick and Kevin Wayne)](http://algs4.cs.princeton.edu/home/)
* [Khan Academy tutorial on Algorithms](https://www.khanacademy.org/computing/computer-science/algorithms)
* [Topcoder Tutorials](https://www.topcoder.com/community/data-science/data-science-tutorials/)
* [GeeksforGeeks](http://www.geeksforgeeks.org/)
* [hackerearth Tutorial](https://www.hackerearth.com/practice/)
