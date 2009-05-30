#include <iostream>
#include <string>
using namespace std;

void swap_p(int* pa, int* pb)
{
  int c = *pa;
  *pa = *pb;
  *pb = c;
}

void swap_r(int& ra, int& rb)
{
  int c = ra;
  ra = rb;
  rb = c;
}

int main()
{
  int a = 1;
  int b = 2;
  cout << "a=" << a << ", b=" << b << "\n";
  swap_p(&a, &b);
  cout << "a=" << a << ", b=" << b << "\n";
  swap_r(a, b);
  cout << "a=" << a << ", b=" << b << "\n";
}
