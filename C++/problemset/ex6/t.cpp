#include <iostream>
using namespace std;

int main(){
  int a,b,c;
  a = 4;
  b = 3;
  c = ++b = a == b;
  cout << a << ' ' << b << ' ' << c;

}
