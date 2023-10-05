/*
In this program we prompt the user to type a lowercase m or uppercase M & and
 * a lowercase f and uppercase F to say hello to Mr or Ms Smith and any other
 * letter that isn't m or M and f or F will not be considered a male or female
but the only difference here is we are using the switch statement
 */

// I compared my answer with the solution the professor provided. Credit
// goes to the professor.

/*
#include <iostream>
using namespace std;

int main() {
  char choice;
  // Mr Smith
  cout << "Choose between the letters m or M\n";
  cout << "Enter m or M: ";
  cin >> choice;
  switch (choice) {
  case 'm':
  case 'M':
    cout << "Hello Mr. Smith\n";

    // Ms. Smith
    cout << "Choose between the letters f or F\n";
    cout << "Enter f or F: ";
    cin >> choice;
  case 'f':
  case 'F':
    cout << "Hello Ms. Smith\n";

  default:
    cout << "Not male or female" << endl;
  }
}
*/