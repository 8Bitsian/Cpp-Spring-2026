/* Imani Hollie 01/16/2026
   Lesson 2 Lab: Write a code to produce a restaurant bill.
   - Prompt the user to enter the meal charge
   - Calculate the tax (6.75% of the meal cost)
   - Add the tax and charge to get the subtotal
   - Calculate the tip (20% of the subtotal)
   - Calculate the total bill by adding the tip
   Display the meal cost, tax amount, tip amount, and total bill.
*/

#include <iostream>  // Allows use of input/output streams (cout, cin)
#include <iomanip>   // Allows use of formatting tools (fixed, setprecision)
using namespace std; // Allows use of standard library without std:: prefix

int main() {  // Program execution starts here
  // Declare variables
  double charge, tax, subtotal, tip, total;
  
  // Get user input
  cout << "Enter Price of Meal: $";
  cin >> charge;

  // Calculate the tax (6.75% of charge)
  tax = charge * 0.0675;

  // Calculate the subtotal (tax + charge)
  subtotal = tax + charge;

  // Calculate the tip (20% of subtotal)
  tip = subtotal * 0.20;

  // Calculate the total bill (subtotal + tip)
  total = subtotal + tip;

  // Output (formatted to 2 decimal places)
  cout << fixed << setprecision(2);
  cout << "\nBill\n";
  cout << "Charge   : $" << charge   << endl;
  cout << "Tax      : $" << tax      << endl;
  cout << "Subtotal : $" << subtotal << endl;
  cout << "Tip      : $" << tip      << endl;
  cout << "Total    : $" << total    << endl;
  
  return 0;  // Ends the program
}
