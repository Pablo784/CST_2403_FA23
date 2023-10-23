/*
I ATTEMPTED 10/23'S CLASSWORK BUT THE PROFESSOR PROVIDED THE SOLUTION Below IN
CLASS TODAY. CREDIT GOES TO THE PROFESSOR


#include <iostream>
using namespace std;

void useStat()
{
  static int x = 0;
  int y = 0;
  x++;
  y++;
  cout << x << "  " << y << endl;
}

int main()
{
  useStat();
  useStat();
  useStat();
}
*/