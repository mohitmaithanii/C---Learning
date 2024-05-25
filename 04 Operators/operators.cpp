#include <iostream>

using namespace std;

int main() {
   //* Operators : Operators are symbols that perform operations on variables and values.

   //! Arithmetic Operators : 

   int firstNumber, secondNumber;
   firstNumber = 7;
   secondNumber = 2;

   cout << "firstNumber + secondNumber = " << (firstNumber + secondNumber) << endl; // '+' Addition
   cout << "firstNumber - secondNumber = " << (firstNumber - secondNumber) << endl; // '-' Subtraction
   cout << "firstNumber * secondNumber = " << (firstNumber * secondNumber) << endl; // '*' Multiplication
   cout << "firstNumber / secondNumber = " << (firstNumber / secondNumber) << endl; // '/' Division
   cout << "firstNumber % secondNumber = " << (firstNumber % secondNumber) << endl; // '%' Modulo

   //! Increment and Decrement Operators : 

   int counter, largeNumber, resultCounter, resultLargeNumber;

   counter = 10;
   largeNumber = 100;

   // incrementing counter by 1 and storing the result in resultCounter
   resultCounter = ++counter;
   cout << "resultCounter = " << resultCounter << endl;

   // decrementing largeNumber by 1 and storing the result in resultLargeNumber   
   resultLargeNumber = --largeNumber;
   cout << "resultLargeNumber = " << resultLargeNumber << endl;

   //! Assignment Operators : assignment operators are used to assign values to variables.

   /*
   =  : x = y  : x = y;
   += : x += y : x = x + y;
   -= : x -= y : x = x - y;
   *= : x *= y : x = x * y;
   /= : x /= y : x = x / y;
   %= : x %= y : x = x % y;
   */

   int sum, difference;
   sum = 2; // 2 is assigned to sum
   difference = 7; // 7 is assigned to difference

   cout << "sum = " << sum << endl;
   cout << "difference = " << difference << endl;
   cout << "\nAfter sum += difference;" << endl;

   // assigning the sum of sum and difference to sum
   sum += difference;  // sum = sum + difference
   cout << "sum = " << sum << endl;

   //! Relational Operators : A relational operator is used to check the relationship between two operands.
   // If the relation is true, it returns 1 whereas if the relation is false, it returns 0.

   int value1, value2;
   value1 = 3;
   value2 = 5;
   bool result;

   result = (value1 == value2);   // false
   result = (value1 != value2);   // true
   result = value1 > value2;      // false
   result = value1 < value2;      // true
   result = value1 >= value2;     // false
   result = value1 <= value2;     // true

   //!  Logical Operators : Logical operators are used to check whether an expression is true or false.

   bool resultLogical;

   resultLogical = (3 != 5) && (3 < 5); // true
   resultLogical = (3 == 5) && (3 < 5); // false
   resultLogical = (3 == 5) && (3 > 5); // false
   resultLogical = (3 != 5) || (3 < 5); // true
   resultLogical = (3 != 5) || (3 > 5); // true
   resultLogical = (3 == 5) || (3 > 5); // false
   resultLogical = !(5 == 2);           // true
   resultLogical = !(5 == 5);           // false

   //! Bitwise Operators : bitwise operators are used to perform operations on individual bits. 

   /*
   & : Binary AND
   | : Binary OR
   ^ : Binary XOR
   ~ : Binary NOT / 	Binary One's Complement
   << : Binary Left Shift
   >> : Binary Right Shift
   */

   return 0;
}