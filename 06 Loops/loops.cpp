#include <iostream>

using namespace std;

int main() {
   //! Loops : Loops are used to repeat a block of code.

   // for loop :
   // The for loop is used to iterate over a sequence of values.

   for (int counter = 1; counter <= 5; ++counter) {
      cout << counter << " ";
   }

   // while loop :
   // The while loop is used to execute a block of code as long as a certain condition is true.

   int index = 1;

   while (index <= 5) {
      cout << index << " ";
      ++index;
   }

   // do...while Loop :
   // The do...while loop is used to execute a block of code at least once,

   int iteration = 1;

   do {
      cout << iteration << " ";
      ++iteration;
   } while (iteration <= 5);

   // break :
   // the break statement terminates the loop when it is encountered.

   for (int i = 1; i <= 5; i++) {
      // break condition     
      if (i == 3) {
         break;
      }
      cout << i << endl;
   }



   return 0;
}