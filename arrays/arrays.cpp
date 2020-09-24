#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;

double getAverage(int arr[], int size) {
  int i, sum = 0;       
  double avg;          

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
   avg = double(sum) / size;

   return avg;
}

int main () {

   int n[ 10 ]; // n is an array of 10 integers
   double balance[] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   cout << balance << endl; //gives memory location
   cout << *balance << endl; // gives first value;
   cout << * (balance + 1)<< endl; // gives second value;
 
   // initialize elements of array n to 0          
   for ( int i = 0; i < 10; i++ ) {
      n[ i ] = i + 100; // set element at location i to i + 100
   }
   cout << "Element" << setw( 13 ) << "Value" << endl;
 
   // output each array element's value                      
   for ( int j = 0; j < 10; j++ ) {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }

   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
 
   // output each array element's value                      
   for ( int i = 0; i < 5; i++ ) {
      for ( int j = 0; j < 2; j++ ) {
      
         cout << "a[" << i << "][" << j << "]: ";
         cout << a[i][j]<< endl;
      }
   }

   double *p;

   p = balance;
 
   // output each array element's value 
   cout << "Array values using pointer " << endl;
   
   for ( int i = 0; i < 5; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }
   cout << "Array values using balance as address " << endl;
   
   for ( int i = 0; i < 5; i++ ) {
      cout << "*(balance + " << i << ") : ";
      cout << *(balance + i) << endl;
   }
   return 0;
}
