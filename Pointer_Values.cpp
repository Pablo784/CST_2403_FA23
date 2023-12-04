/*
Here are the instructions for number 2 of assignment 4

For each of the following, write C++ statements that perform the specified task.. (Ref: classwork named pointer2)

a) Declare a built-in array of type unsigned int called values with five elements, and initialize the elements to the even integers from 2 to 10.

b) Declare a pointer vPtr that points to a variable of type unsigned int.

c) Write two separate statements that assign the starting address of array values to pointer variable vPtr.

d) Use a for statement to print the elements of array values using pointer/offset notation.

e) Refer to the fifth element of values using pointer subscript notation.

f) Assume that unsigned integers are stored in two bytes and that the starting address of the array is at location 1002500 in memory.

• If vPtr points to the first element of array values, then what address is referenced by vPtr + 3? (manually calculate)

• What value is stored at that location?

#include <iostream>
using namespace std;

int main() {
	unsigned int values[] = {2, 4, 6, 8, 10}; // Declaring a built-in array with 5 elements
  
	unsigned int *vPtr; // A pointer of vPtr that points to a variable of type unsigned int
  
	vPtr = &values[0]; // or vPtr = values;
  
	for (int i = 0; i < 5; i++) { 
  // Printing the elements of array values using pointer/offset notation with a for loop
  
	cout << *(vPtr + i) << endl; 
	}
	cout << *(vPtr + 4) << endl;
	return 0;
}
For letter f
- The address that is refrenced by vPtr + 3: 1002500 + 3 * 3 = 1002509
- The value is 8 
*/