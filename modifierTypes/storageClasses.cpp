#include <iostream>
using namespace std;

void func(void);
//static - once a variable is created it is set forever/not recreated when called

static int count = 10; /* Global variable */
 
int main() {
   while(count--) {
      func();
   }
   
   return 0;
}

// Function definition
void func( void ) {
   static int i = 5; // local static variable
   i++;
   std::cout << "i is " << i ;
   std::cout << " and count is " << count << std::endl;
}

