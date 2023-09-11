/*
This is some classwork we did on 9/8/2023.

The instructions are as follows:
Part 1
1. Write a C++ statement to accomplish each of the following (assume that using
directives have been used for cin, cout and endl):

a) Declare the variables x, y, z and result to be of type int (in separate
statements).

b) Prompt the user to enter three integers. (Print this message)

c) Read (input) three integers from the user (keyboard) and store them in the
variables x, y and z.

d) Compute the product of the three integers contained in variables x, y and z.
Assign the product to the variable result.

e) Print "The product is " followed by the value of the variable result.
*/

/*
Lines 28-40 is what I had previously. The professor told me to add for a 3rd value so I did that in lines 42-43 and added the other value in line 45
  */


#include <iostream>
int main() {

  int value1 = 0;
  int value2 = 0;
  int value3 = 0;
  int sum = 0;

  std::cout << "Type in first number: ";
  std::cin >> value1;

  std::cout << "Type in second number: ";
  std::cin >> value2;

  std::cout << "Type in the third number: ";
  std::cin >> value3;

  sum = value1 * value2 * value3;

  std::cout << "The product is: ";
  std::cout << sum;
  std::cout << std::endl;

  system("pause");
}