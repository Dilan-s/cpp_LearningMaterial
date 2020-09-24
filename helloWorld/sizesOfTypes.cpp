#include <iostream>
using namespace std;

int main() {
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

   typedef int feet;

   int distanceInt = 10;
   feet distanceFeet = 10;

   cout << "Distance as int: " << distanceInt << endl << "Distance as Feet: " << distanceFeet << endl; 
   
   return 0;
}
