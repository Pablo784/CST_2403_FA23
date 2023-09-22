/*
This is part 2 of Assignment 1
Here are the instructions:

a) reads in the radius of a cirlce (from user) as a double

b) calculates the circle's area and stores it in a float variable. Uses the
constant value 3.14159 (PI)

c) converts the float value of the variable into an integer and prints it.

d) prints the circle's circumfrence. Calculate the circumfrence in output
statment

*/

// Part 2 is done below

#include <iostream>
using namespace std;
int main() {

  double radius;
  float area;
  const float PI = 3.14159;

  cout << "Give a radius of the circle: ";
  cin >> radius;

  area = PI * radius * radius;

  int areaAsInteger = static_cast<int>(area);
  cout << "The area of the circle (rounded as an integer) is: " << areaAsInteger
       << endl;

  float circumference = 2 * PI * radius;

  cout << "The circumference is: " << circumference << endl;

  return 0;
}
