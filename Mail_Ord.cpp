/*
Here is number 2 of our 2nd homework assignment
A mail order house sells five different products whose product numbers and
retail prices are: product 1 - $2.98 product 2 - $4.50
product 3 - $9.98
product 4 - $4.49
product 5 - $6.87.

a) Write a program that reads a series of pairs of numbers (from user). That is,
each time it reads the pairs of values as follows:
i) product number
ii) quantity of that product sold

b) Your program should use a switch statement to determine the retail price for
each product.

c) Your program should calculate and display the total retail value of all
products sold.  d) Use a sentinel-controlled while loop so user can indicate
when the program should stop looping and display the final results.

*/

// Code for number 2 is below. A tutor helped me. Credit goes to the tutor.

/*
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int productNumber;
  int quantity;
  double totalRetailvalue = 0.0;

  cout << "Enter the product's number between 1-5 and the amount of inventory
sold."; cout << "\nType -2 to stop: " << endl;

  while (true) {
    cout << "\n Product number: ";
    cin >> productNumber;

    if (productNumber == -2) {
      break;
    }
    cout << "Amount of inventory sold: ";
    cin >> quantity;

    double price;
    switch (productNumber) {
    case 1:
      price = 2.98;
      break;
    case 2:
      price = 4.50;
      break;
    case 3:
      price = 9.98;
      break;
    case 4:
      price = 4.49;
      break;
    case 5:
      price = 6.87;
      break;
    default:
      cout << "Not a valid product number. Please enter numbers between 1 & 5. "
           << endl;
      continue;
    }
    totalRetailvalue += price * quantity;
  }
  cout << fixed << setprecision(2);
  cout << "Total retail value of the products sold: $" << totalRetailvalue
       << endl;
  return 0;
}
*/