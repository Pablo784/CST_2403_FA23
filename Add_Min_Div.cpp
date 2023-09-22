/*
This is part 1 of Assignment 1
Here are the instructions:

a) asks the user to enter two numbers as an integer

b) reads the two numbers from user (obtain two numbers in same state or same
line)

c) prints the numbers and their sum in same state statement. (For example, if
the user types 4 2 the program will print: "the sum of 4 and 2 is 6")

d) Also, print difference, and quotient of the two numbers in separate lines.

*/

// Part 1 of Assignment 1 is done below

#include <iostream>
using namespace std;
int main() {

  int number1 = 0;
  int number2 = 0;
  int sum = 0;

  // For the Sum of two numbers
  cout << "\n Let's do some addition\n";
  cout << "Type in a number: ";
  cin >> number1;

  cout << "Type in another number: ";
  cin >> number2;

  sum = number1 + number2;
  cout << "The total is: ";
  cout << sum;

  // For the difference between two numbers
  cout << "\n Let's do some substraction\n";
  cout << "Type a number: ";
  cin >> number1;

  cout << "Type in another number: ";
  cin >> number2;

  sum = number1 - number2;
  cout << "The difference is: ";
  cout << sum;

  // For the quotient between two numbers
  cout << "\n Let's do some division!\n";
  cout << "Type a number: ";
  cin >> number1;

  cout << "Type another number: ";
  cin >> number2;

  sum = number1 / number2;
  cout << "The quotient is: ";
  cout << sum;

  cout << endl;
}
