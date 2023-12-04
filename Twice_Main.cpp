/*
Here are the instructions for number 1 of assignment 4

Write a complete program that will have a main function and a function called twice. (Hint:See Fig 8.7)

a. Write a function named twice whose only parameter is an integer pointer.

b. This function doubles the value stored at the location pointed by the pointer
parameter.

c. In the main method, declare an integer variable num and initialize it to 5. Call the function twice from main such that the function twice will double the value of num.

d. In the main method and after calling the function, print the variable num
*/

#include <iostream>
using namespace std;

void twice (int*ptr);

int main() {

int num = 5; // Declaring the integer variable num and initialize it to 5
  
  twice(&num); // Calling the function twice & passing the address of num
  
  cout << "The doubled value of num 5 is: " << num << endl; 
  // Printing the variable num after calling the function
  
  return 0;
}
void twice(int *ptr) {
  *ptr = 2 * (*ptr);
}