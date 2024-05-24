#include <iostream>

using namespace std;

int main() {

   /* A variable is a container (storage area) to hold data.
   To indicate the storage area, each variable should be given a unique name(identifier).

   A variable name can only have alphabets, numbers, and the underscore '_'
   */

   int age = 14;

   // The value of a variable can be changed, hence the name variable.
   int age = 14;
   age = 17;

   // Constants: we can create variables whose value cannot be changed.
   const int cr7 = 7;
   cr7 = 2500;

   // Literals: Literals are data used for representing fixed values. They can be used directly in the code.

   // 1. Integers : An integer is a numeric literal(associated with numbers) without any fractional or exponential part.
   string stringLiteral = "Hello, World!";

   // 2. Floating-point Literals : A floating-point literal is a numeric literal that has either a fractional form or an exponent form.
   float floatingPointLiteral = 3.14;

   // 3. Characters : A character literal is created by enclosing a single character inside single quotation marks.
   char characterLiteral = 'a';

   // 4. String Literals : A string literal is a sequence of characters enclosed in double-quote marks.
   string stringLiteral = "Hello, World!";


   return 0;
}