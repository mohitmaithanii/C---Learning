#include <iostream>

using namespace std;

int main() {
   //! we use the if...else statement to run one block of code under certain conditions and another block of code under different conditions.

   // if :
   int inputNumber;

   cout << "Enter an integer: ";
   cin >> inputNumber;

   // checks if the inputNumber is positive
   if (inputNumber > 0) {
      cout << "You entered a positive integer: " << inputNumber << endl;
   }

   cout << "This statement is always executed." << endl;

   // if...else :
   int enteredNumber;

   cout << "Enter an integer: ";
   cin >> enteredNumber;

   if (enteredNumber >= 0) {
      cout << "You entered a positive integer: " << enteredNumber << endl;
   }
   else {
      cout << "You entered a negative integer: " << enteredNumber << endl;
   }

   cout << "This line is always printed." << endl;

   // else if :
   int userNumber;

   cout << "Enter an integer: ";
   cin >> userNumber;

   if (userNumber > 0) {
      cout << "You entered a positive integer: " << userNumber << endl;
   }
   else if (userNumber < 0) {
      cout << "You entered a negative integer: " << userNumber << endl;
   }
   else {
      cout << "You entered 0." << endl;
   }

   cout << "This line is always printed." << endl;

   // Nested if...else :
   int userEnteredNumber;

   cout << "Enter an integer: ";
   cin >> userEnteredNumber;

   // outer if condition
   if (userEnteredNumber != 0) {

      // inner if condition
      if (userEnteredNumber > 0) {
         cout << "The number is positive." << endl;
      }
      // inner else condition
      else {
         cout << "The number is negative." << endl;
      }
   }
   // outer else condition
   else {
      cout << "The number is 0 and it is neither positive nor negative." << endl;
   }

   cout << "This line is always printed." << endl;

   return 0;
}