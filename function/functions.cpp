#include <iostream>
using namespace std;

/*
  return_type function_name(parameter list) {
    statements
  }
 */

int max(int, int);

int main() {

  cout << "max of 1 and 2: " << max(1, 2) << endl;

}



int max(int num1, int num2) {
  int result;
  
  if (num1 > num2){
	result = num1;
  } else {
	result = num2;
  }

  return result;
}

