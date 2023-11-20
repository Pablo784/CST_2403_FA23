/*
You attempted 11/20's classwork but the professor provided the solution in class and explained the syntax. Credit goes to the professor. 

These are the instructions for 11/20's classwork. 
Part 1:
For each of the following, write a single statement that performs the specified task. 

double number1 =7.3;
double number2;

a) Declare the variable fPtr to be a pointer to a variable of type double.

b) Assign the address of variable number1 to pointer variable fPtr.

c) Print the value of the variable pointed to by fPtr.

d) Assign the value of the variable pointed to by fPtr to variable number2.

e) Print the value of number2.

f) Print the address of number1.

g) Print the address stored in fPtr. Is the value printed the same as the address of number1?
------------------------------------------------------
Part 2:

a) Using the statements you wrote in Part 1, write a complete program (containing main() ) . 
[Note: You’ll need to include required files and using directives]

b) Create a new project and add the program to the project.
*/

#include <iostream>
using namespace std;

int main() {
  double number1 = 7.3;
  double number2;
  
double *fPtr;
  fPtr = &number1;
  cout << "The value of *fPtr is " << *fPtr << endl;
  number2 = *fPtr;
  cout << "The value of number2 is " << number2 << endl;
  cout << "The address of number1 is " << &number1 << endl;
  cout << "The address stored in fPtr is " << fPtr << endl;
}