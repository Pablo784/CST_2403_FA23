/*
Here are the instructions for part 2 of assignment 3

Write a complete program that will do the following:
a) Declare an empty integer vector (without mentioning any size).

b) Use a loop to read in 20 numbers, each of which is between 10 and 100,
inclusive. As each number is read from user, validate it (i.e. check whether it
is between 10 and 100).

c) Store the valid number in the vector only if it isn’t a duplicate of a number
already in vector. Use push_back function to add each unique value to the
vector.

d) Display only the unique valid values that the user entered. (Hint: print
vector)
*/


/*
#include <algorithm>
#include <iostream>
#include <vector> // You need to include this header file 
using namespace std;


int main() {
   vector<int> numbers;
    int num;

    // Waiting for a number between 10-100 from user input 
    for(int i = 0; i < 20; i++) {
       cout << "Enter number " << i+1 << ": ";
        cin >> num;

        // Validate the number from user input
        if(num < 10 || num > 100) {
         cout << "Invalid number. Please enter a number between 10 and 100.\n";
            i--;
            continue;
        }
        // Checking for duplicate numbers that the user typed already
        if(find(numbers.begin(), numbers.end(), num) != numbers.end()) {
           cout << "Duplicate number. Please enter a unique number.\n";
            i--;
            continue;
        }
        numbers.push_back(num); // Add the number to the vector
    }

    // Displaying the unique numbers after the user finishes typing numbers between 10-100
    cout << "Here are the unique numbers entered: \n";
    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
*/