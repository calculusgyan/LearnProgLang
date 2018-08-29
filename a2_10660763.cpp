#include <iostream>

using namespace std;

int main()
{
   int checkEven = 0, checkCount;
   int integerNumber;
   bool checkPrime = true;

   cout << "\n A program to check whether or not a number entered is prime." << endl;
   cout << "\n Enter a number: ";
   cin >> integerNumber;

   for(checkCount = 2; checkCount <= integerNumber / 2; ++checkCount){
      if((integerNumber % checkCount) == 0){
         checkPrime = false;
         break;
      }
   }

   if(checkPrime)
      cout << "\n The number " << integerNumber << " is a prime number." << endl;
   else
      cout << "\n The number " << integerNumber << " is not a prime number." << endl;

   return 0;
}
