#include <iostream>
#include <ctime>
using namespace std;

// function declaration:
double getAverage(int arr[], int size);
int *randArray();

int main () {

   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   avg = getAverage( balance, 5 ) ;
 
   cout << "Average value is: " << avg << endl; 

   int *p;

   p = randArray();
   
   for ( int i = 0; i < 10; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }
   
   return 0;
}

double getAverage(int arr[], int size) {
  int i, sum = 0;       
  double avg;          

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
   avg = double(sum) / size;

   return avg;
}


int *randArray() {
  static int r[10];

  srand(10); //(unsigned)time( NULL ) );
   
   for (int i = 0; i < 10; ++i) {
      r[i] = rand();
      cout << r[i] << endl;
   }

   return r;
}



