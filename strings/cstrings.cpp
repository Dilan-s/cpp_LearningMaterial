#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  cout << greeting << endl;

  char greeting2[] = "Hello2";
  cout << greeting2 << endl;

  char str1[15] = "Hello";
  char str2[10] = "World";
  char str3[15];
  int  len ;
  
  // copy str1 into str3
  strcpy(str3, str1);
  cout << "strcpy(str3, str1): " << str3 << endl;
  
  // concatenates str1 and str2
  strcat(str1, str2);
  cout << "strcat(str1, str2): " << str1 << endl;
  
  // total lenghth of str1 after concatenation
  len = strlen(str1);
  cout << "strlen(str1): " << len << endl;
}

