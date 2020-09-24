#include <iostream>
using namespace std;

//global
int g = 100;
/*
  int i -> i = 0;
  char c -> c = '\0';
  float f -> f = 0;
  dobule d -> d = 0;
  pointer p -> p = NULL;
*/

void func() {
  //uses global variable
  cout << g << endl;
}

int main() {
  //local
  int a, b;
  int c;

  a = 10;
  b = 20;
  c = a + b;
  //uses local variables
  cout << c << endl;
  //uses global variable
  cout << g << endl;

  int g = 10;
  //uses local variable
  cout << g << endl;

  func();
  return 0;
}
