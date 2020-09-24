#include <iostream>
using namespace std;

int main() {
  int i;
  // hex = 0xabc, oxt = 0abc, dec = abc, bin = 0babc, long = abcl, unsigned = abcu, unsigned long = abcul
  i = 212;
  cout << i << endl;
  i = 215u;
  cout << i << endl;
  i = 0xFeeL;
  cout << i << endl;
  i = 071;
  cout << i << endl;
  //  i = 078; 8 is invalid octal
  //  i = 032UU; Cannot repeat suffix U
  i = 0b01001;
  cout << i << endl;
  i = 30l;
  cout << i << endl;
  i = 50ul;
  cout << i << endl;

  float f;
  // exponent introduced by e or E
  f = 3.14159;
  cout << f << endl;
  f = 314159E-5L;
  cout << f << endl;
  f = 314159E5L;
  cout << f << endl;
  // f = 510E; inclomplete exponent
  // f = 210f; no decimal or exponent
  // f = .e55; missing integer or fraction

  bool b;
  b = true;
  cout << b << endl;
  b = false;
  cout << b << endl;
  cout << (0 == 0) << endl;

  char c;
  //Escape characters
  c = '\\';
  cout << c << endl;
  c = '\'';
  cout << c << endl;
  c = '\"';
  cout << c << endl;
  c = '\?';
  cout << c << endl;
  c = '\a';
  cout << c << endl;
  c = '\b';
  cout << c << endl;
  c = '\f';
  cout << c << endl;
  c = '\n';
  cout << c << endl;
  c = '\r';
  cout << c << endl;
  c = '\t';
  cout << c << endl;
  c = '\v';
  cout << c << endl;
  //c = '\000';
  //c = '\xhh';
  
  cout << "Hello\tWorld\n\n";
  
  cout << "hello, dear" << endl;
  
  cout << "hello, \
dear" << endl;
  
  cout << "hello, ""d""ear" << endl;
}
