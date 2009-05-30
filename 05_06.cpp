#include <iostream>
#include <string>
using namespace std;

void f(char c)
{
  cout << c << '\n';
}

void g(char& rc)
{
  cout << rc << '\n';
}

void h(const char& crc)
{
  cout << crc << '\n';
}

int main()
{
  f('a');
//   g('a');
  h('a');

  f(49);
//   g(49);
  h(49);

  f(3300);
//   g(3300);
  h(3300);

  char c = 'a';
  f(c);
  g(c);
  h(c);

  unsigned char uc = 'a';
  f(uc);
//   g(uc);
  h(uc);

  signed char sc = 'a';
  f(sc);
//   g(sc);
  h(sc);
}
