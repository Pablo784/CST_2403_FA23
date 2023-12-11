/* 
Here are the instructions for 12/6's classwork
1.	In a header file, create a class Rectangle with 2 private floating data members: length and width. 

2.	Use constructor that takes two parameters and uses them to initialize the data members. 

3.	Also, provide set and get functions for the length and width attributes. 
The set function should verify that the parameter is larger than 0.0 and less than 20.0. If value is verified, then set functions assigns the value to data member and return true. Otherwise, returns false.

You made an attempt to the classwork but the professor provided the solution in class on 12/11. Credit goes to the professor.
*/
class Rectangle 
{
 private :
  float Length;
  float Width;

 public:

Rectangle (float L, float W)
  {
    setLength(L);  // Length = L;
    setWidth(W);   // Width = W; 
  }

float getLength() 
{
    return Length;
}

float getWidth()
  {
    return Width;
  }

bool setLength(float L)
  {
    if ((L > 0) && (L <=20))
    {
      Length = L;
      return true;
    }
    else
      return false;
  }

bool setWidth(float W)
  {
    if ((W > 0) && (W <=20))
    {
      Width = W;
      return true;
    }
    else
      return false;
  }

};