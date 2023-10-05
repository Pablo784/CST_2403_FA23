/* In this program we prompt the user to type a lowercase m or uppercase M & and
 * a lowercase f and uppercase F to say hello to Mr or Ms Smith and any other
 * letter that isn't m or M and f or F will not be considered a male or female

#include <iostream>
using namespace std;

int main() {
  char choice;

  // Mr. Smith
  cout << "Enter m or M: ";
  cin >> choice;
  if (choice == 'm')
    cout << "Hello Mr. Smith\n";
  else if (choice == 'M')
    cout << "Hello Mr. Smith\n";

  // Ms. Smith
  cout << "Enter f or F: ";
  cin >> choice;
  if (choice == 'f')
    cout << "Hello Ms. Smith\n";
  else if (choice == 'F')
    cout << "Hello Ms. Smith\n";

  // neither a male or female
  else
    cout << "Not male or female";
}
*/