/*
Here are the instructions for part 1 of assignment 3

Write a complete program that will have a main function and a function called
average. (Ref: slides 68 and 69 of lecW9_arrays, slides 47 to 49 of lecW6_func )

a. Function average will only have a 2D integer array parameter with 2 rows and
3 columns. This function will return the average of the elements stored in 2D
array. Use nested counter-controlled for loop. (Use array template instead of
built-in array)

b. In main(), declare a 2D integer array template called t with 2 rows and 3
columns.

c. In main(), initialize the array using initializer list such that:
• First row will have values 1, 2, 3 (from left to right)
• Second row will have values 6, 8, 0 (from left to right)

d. Call the function average from main such that it will return the average of
the elements stored in array t.

e. In main(), store the value returned from the function average in a variable.
Then, print that variable.

Here is how to declare and initialize a 2-D array: 
array <array <dataType, columnSize>, rowSize> arrayname = the array itself
*/

/*
#include <array> // You need to include this header file 
#include <iostream>
using namespace std;

// Function to calculate average
double average(const array<array<int, 3>, 2> &arr) {
  double sum = 0.0;
  for (const auto &row : arr) {
    for (const auto &element : row) {
      sum += element;
    }
  }
  return sum / (arr.size() * arr[0].size());
}

int main() {
  array<array<int, 3>, 2> t = {{{1, 2, 3}, {6, 8, 0}}}; 
  
  double avg = average(t); 
  // Call the type of function and store the result within the name of your array 
 

  cout << "The average of the 2D array is: " << avg << endl; 
  // Print the result along with the function and end line 

  return 0; 
  // return the value 0
}
*/