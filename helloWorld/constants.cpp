#include <iostream>
using namespace std;

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main() {
   int area;  
   
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;

   const int LENGTH2 = 15;
   const int WIDTH2  = 17;
   const char NEWLINE2 = '\n';

   area = LENGTH2 * WIDTH2;
   cout << area;
   cout << NEWLINE2;
   return 0;
}
