[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/vKY53i0z)
# Project 1: Runtime Analysis of Insertion Sort and Quicksort
[![Points badge](../../blob/badges/.github/badges/points.svg)](../../actions)

## Overview
In this project, you will perform an experimental analysis of runtime for two
sorting algorithms: insertion sort and quicksort. You will implement these
sorting algorithms, measure their runtime for various problem sizes, and
compare their performance. This project aims to deepen your understanding of
experimental program analysis, algorithm performance, and data visualization.

## Project Description
+ Driver for Runtime Recording: You will be provided with a separate
  instruction on how to record the runtime of functions with different input
  sizes. This driver will be used to record the runtime of your sorting
  algorithms and write data to a CSV file. Read the [instruction](time.md) to
  learn how to measure runtime of a function.
+ Sorting Algorithm Implementation: Your task is to implement both the
  insertion sort and quicksort algorithms from scratch. These implementations
  will serve as the basis for your runtime analysis. You can make a module
  sort.hpp/sort.cpp to hold the implementations of sorting algorithms. Please
  use the correct function name as specified in the provided
  test-sort.cpp so they can work together.
+ Data Shuffling and Generation: You will generate input arrays of various
  sizes using the `std::shuffle` function applied to an initial array
  containing data from 1 to N. The shuffling process should be controlled using
  a seed to ensure reproducibility. Read further instruction [here](shuffle.md)
+ Sorting Algorithm Validation (test-sort.cpp): Provided with the
  test-sort.cpp file, your task is to complete the implementation of the
  sorting functions to be used in this driver. It should test the correctness
  of your sorting algorithms by validating whether they produce correctly
  sorted arrays.
+ CSV Data Output: After running the sorting algorithms on each input array,
  you will save the runtime data in a CSV file named ``results.csv``. This will
  enable you to perform further analysis on the collected data. The sizes to
  test are ``100, 500, 1000, 5000, 10000, 50000``. The program should finish in
  10 seconds unless your program has some problems. Do not wait forever, use
  ``Ctrl-c`` keyboard shortcut to stop it and try to fix your program.
+ Visualization and report: You will export the recorded runtime data as CSV
  files. You should then use external programs like Microsoft Excel or Google
  Sheets to create individual plots for insertion sort and quicksort. These
  plots will visualize the relationship between runtime and problem size (array
  size) for both algorithms, allowing for a direct comparison. Example report
  with plots can be found [here](example-report.pdf)

## Requirements
+ Implement insertion sort and quicksort algorithms.
+ Generate shuffled input arrays using `std::shuffle`.
+ Record runtime data using the provided framework.
+ Print runtime data in CSV format.
+ Export runtime data as CSV files for visualization in external programs.
+ Organize your results into a report in a single document file. It should
  include tables of data, plots, and interpretation of your results. Make a
  conclusion on whether your experimental result agree with the theory.
+ Your `makefile` should be able to compile ``main`` and ``test-sort``
  executables.
+ The ``main`` executable should run and save an CSV file for further
  processing.
+ The ``test-sort`` should run correctly without any assertion errors.

## Implementation Notes
+ Compile your program to an executable ``main``. **Do not use other names!**
  You may lose points if the grader cannot find your executable.
+ We employed C++ vector container as arrays in this project for simplicity.
  They should be passed by reference to the sorting algorithm.
+ Ensure that your sorting algorithms work correctly before proceeding with
  runtime analysis. Running ``make -f test.mk test-sort`` without error
  indicates working sorting algorithms.
+ Control the random seed for shuffling to maintain reproducibility.
+ Design your code with modularity and clarity in mind.
+ **No in-code comments needed!** Make documentations for each
  function/class/method instead. They are special comment blocks right above
  functions, classes, etc. as instructions on these entities.
+ **Never add/commit/push your executables!** Clean them up before ``git add``!


## Grade breakdown
+ [10 pts] Compilable through make commands

  + ``make`` or ``make main`` can compile your main executable.

+ [50 pts] Functionality

  * [30 pts] ``make -f test.mk test-sort`` runs without errors, which suggests
    working sorting algorithms.
  * [20 pts] ``main`` runs without error and saves a valid CSV file. This will
    be checked using the ``make -f test.mk check-csv`` command. You must have
    the ``make main`` working to make this work.

+ [20 pts] Visualization and report

  Tables and plots for both algorithms. Conclusion on whether the experimental
  results agree with the theoretical complexity.

+ [10 pts] Correct submission: no missing or redundant files
+ [10 pts] Code quality: good modular design, clean code, good documentations

## Hints
+ For whatever function names, class names, variable names and filenames
  specified in this instruction, **use the exact same name including case!**
  This is the best way to avoid failure of the autograding process.
