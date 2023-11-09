/*
Part 1: 
1.	Write a complete program that declares an array of type double called numbers containing 6 elements 

2.	Initialize the elements to the values 0.0, 1.1, 2.2, 3.3, 4.4, 5.5 using initializer list.

3.	change the fifth element to 4

4.	Use a range-based for statement to print the elements of array numbers.

Part 2:
1.	Declare a 2D array of type float called mulArray with row 3 and column 2

2.	Initialize the elements to the values 0.0, 1.1, 2.2, 3.3, 4.4, 5.5 using
initializer list.

3.	change the element of third row and second column to 4

4.	Use nested for statements to print the elements of array mulArray.

I made an attempt towards the classwork assignment, but I was unable to finish it and the professor provided the solution in class on 11/8. Credit goes to the professor
*/

#include <iostream>
#include <array> // A must-add header file if your program has arrays
using namespace std;

int main()
{
      

array< double, 6 > numbers = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5 }; 

  numbers[4] = 4;
   // output array element's value using range-based for
  for (double j : numbers)
	  cout << j << " ";

   cout << endl;



array< array< float, 2 >, 3 > mulArray = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5 };

mulArray[2][1]=4;

cout << "\n output 2D array elements" << endl;
for ( int row = 0; row < 3; ++row ) 
{
  for ( int column = 0; column < 2; ++column )
       cout << mulArray[ row ][ column ] << ' ';
     cout << endl;
}


} // end main
