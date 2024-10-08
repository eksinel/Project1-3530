# Time Measurement in C++

Measuring the time taken by an algorithm can be done using the `<chrono>`
library in C++. Here is an example on a sorting algorithm. Here's a
step-by-step guide on how to measure the time of a function using this library:

1. **Include the Necessary Headers:**
   Include the necessary header files for using the `<chrono>` library:

   ```cpp
   #include <iostream>
   #include <chrono>
   ```

2. **Choose a Clock Type:** `<chrono>` provides different clock types. The
   `std::chrono::high_resolution_clock` is commonly used for measuring short
   durations with high precision.

3. **Define the Function to Be Measured:** Define the function you want to
   measure. For example, let's say you have a sorting function called `mySort`:

   ```cpp
   void mySort(std::vector<int>& arr) {
       // Your sorting logic here
   }
   ```

4. **Measure the Time:** Use the `<chrono>` library to measure the time taken
   by the function:

   ```cpp
   int main() {
       // Create an array to be sorted
       std::vector<int> arr = { ... }; // Your array data here

       // Start the clock
       auto start = std::chrono::high_resolution_clock::now();

       // Call the function to be measured
       mySort(arr);

       // Stop the clock
       auto end = std::chrono::high_resolution_clock::now();

       // Calculate the duration
       std::chrono::duration<double> duration = end - start;

       // Print the duration in seconds
       std::cout << "Function took " << duration.count() << " seconds." << std::endl;

       return 0;
   }
   ```

5. **Run and Observe:** Compile and run your program. You'll see the time taken
   by the `mySort` function printed in seconds.

Remember, the timing results may vary based on system load, compiler
optimizations, and other factors. It's a good practice to run the function
multiple times and calculate the average time for more accurate results.
