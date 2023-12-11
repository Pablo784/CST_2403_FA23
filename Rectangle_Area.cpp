/* 
Here are the instructions for 12/6's classwork
4.	In a separate file, write a test program (containing main method) that 
a.	creates two Rectangle objects with different values for data members 

b.	print the attributes (i.e. data members) of first object

You made an attempt to the classwork but the professor provided the solution in class on 12/11. Credit goes to the professor.
*/
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
  Rectangle obj1(2,4);
  Rectangle obj2(3,9);


  cout << "Object 1 dimensions "; 
 cout << obj1.getLength() << " X " << obj1.getWidth() << endl;  


  return 0;
}