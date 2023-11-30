/*
Here are the instructions for today's classwork - 11/29. 
You made an attempt but the professor provided the solution in class. Credit goes to the professor

For each of the following, write C++ statements that perform the specified task. Each part of the exercise should use the results of previous parts where appropriate. 

1) Declare a built-in array of type double called numbers with 10 elements, and initialize the elements
to the values 0.0, 1.1, 2.2, …, 9.9. 

2) Declare a pointer nPtr that points to a variable of type double.

3) Write two separate statements that each assign the starting address of array numbers to
the pointer variable nPtr.

4) Use a for statement to print the elements of array numbers using pointer/offset notation
with pointer nPtr. (reference: slide 101)

5) Use a for statement to print the elements of array numbers using pointer/subscript notation
with pointer nPtr. (reference: slide 101)

6) Refer to the fourth element of array numbers using pointer/offset notation with the array name as the pointer (reference: slide 101)

7) Assume that double-precision, floating-point numbers are stored in eight bytes and that the starting address of the array is at location 1002500 in memory: 

a) If nPtr points to the beginning of array numbers then what address is referenced by nPtr + 8? (manually calculate) 

b) What value is stored at that location?
*/

#include <iostream>
#include <array>
using namespace std;

int main() {

   double numbers[ 10 ] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
     double *nPtr;
     nPtr = numbers; 
    nPtr = &numbers[ 0 ];
  for ( int j = 0; j < 10; ++j )
    cout << *( nPtr + j ) << ' ';
  for ( int m = 0; m < 10; ++m )
    cout << nPtr[ m ] << ' ';
  
  *( numbers + 3 ); // This is for #6 
     //The address is 1002500 + 8 * 8 = 1002564. The value is 8.8. - This is for number 7
}




