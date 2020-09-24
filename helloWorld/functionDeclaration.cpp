#include <iostream>
using namespace std;

int func1();
int func2() {
  return 2;
}

int main(){
  cout << func1() << endl;
  cout << func2() << endl;
  return 0;
}

int func1() {
  return 1;
}
