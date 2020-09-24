#include <iostream>
#include <bitset>
using namespace std;


int main() {
  int a = 25;
  int b = 10;
  cout << "a = " << a << ", b = " << b << endl;
  cout << "a + b = " << a + b << endl;
  cout << "a / b = " << a / b << endl;
  cout << "a - b = " << a - b << endl;
  cout << "a * b = " << a * b << endl;
  cout << "a % b = " << a % b << endl;
  cout << "a++ = " << a++ << endl;
  cout << "++a = " << ++a << endl;
  cout << "b-- = " << b-- << endl;
  cout << "--b = " << --b << endl;

  cout << "a == b = ";
  if (a == b) {
	cout << "T" << endl;
  } else {
	cout << "F" << endl;
  }

  cout << "a != b = ";
  if (a != b) {
	cout << "T" << endl;
  } else {
	cout << "F" << endl;
  }
  
  cout << "a > b = ";
  if (a > b) {
	cout << "T" << endl;
  } else {
	cout << "F" << endl;
  }
  
  cout << "a < b = ";
  if (a < b) {
	cout << "T" << endl;
  } else {
	cout << "F" << endl;
  }
  
  cout << "a >= b = ";
  if (a >= b) {
	cout << "T" << endl;
  } else {
	cout << "F" << endl;
  }
  
  cout << "a <= b = ";
  if (a == b) {
	cout << "T" << endl;
  } else {
	cout << "F" << endl;
  }

  cout << "a <= b && a > b = ";
  if (a <= b && a > b) {
	cout << "T" << endl;
  } else {
	cout << "F" << endl;
  }

  cout << "a <= b || a > b = ";
  if (a == b || a > b) {
	cout << "T" << endl;
  } else {
	cout << "F" << endl;
  }

  cout << "!(a <= b) = ";
  if (!(a == b)) {
	cout << "T" << endl;
  } else {
	cout << "F" << endl;
  }

  int b1 = 60;
  int b2 = 13;
  cout << "b1 = " << bitset<8>(b1) << endl;
  cout << "b2 = " << bitset<8>(b2) << endl;
  cout << "b1 & b2 = " << bitset<8>(b1 & b2) << endl;
  cout << "b1 | b2 = " << bitset<8>(b1 | b2) << endl;
  cout << "b1 ^ b2 = " << bitset<8>(b1 ^ b2) << endl;
  cout << "~b1 = " << bitset<8>(~b1) << endl;
  cout << "b1 >> 2" << bitset<8>(b1 >> 2) << endl;
  cout << "b1 << 2" << bitset<8>(b1 << 2) << endl;
  
    
}
