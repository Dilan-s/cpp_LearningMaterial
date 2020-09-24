#include <iostream>
using namespace std;

int main() {
  enum colour {red, green = 5, blue} c;
  c = blue;

  cout << c << endl;
  colour d = green;
  cout << d << endl;
  
  
  return 0;
}
