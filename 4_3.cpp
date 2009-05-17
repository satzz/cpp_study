#include <iostream>
#include <string>
using namespace std;

int main()
{
  bool b;
  cout << sizeof(b) << "\n"; // 1
  char c;
  cout << sizeof(c) << "\n"; // 1
  short si;
  cout << sizeof(si) << "\n"; // 2
  wchar_t wc;
  cout << sizeof(wc) << "\n"; // 4
  float f;
  cout << sizeof(f) << "\n"; // 4
  int i;
  cout << sizeof(i) << "\n"; // 4
  unsigned u;
  cout << sizeof(u) << "\n"; // 4
  long l;
  cout << sizeof(l) << "\n"; // 4
  string s;
  cout << sizeof(s) << "\n"; // 4
  double d;
  cout << sizeof(d) << "\n"; // 8
  long double ld;
  cout << sizeof(ld) << "\n"; // 16

  char cc[10];
  cout << sizeof(cc) << "\n"; // 10
  int ii[10];
  cout << sizeof(ii) << "\n"; // 40

  char* cp;
  cout << sizeof(*cp) << "\n"; // 1
  int* ip;
  cout << sizeof(*ip) << "\n"; // 4

  enum flag {sunday = 1, monday = 2, tuesday = 4, wednesday = 8, thursday = 16, friday = 32, saturday = 64};
  cout << sizeof(flag) << "\n"; // 4
}
