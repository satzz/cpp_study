#include <iostream>
#include <string>
using namespace std;

int main()
{
  // pointer to char
  char* pc = "c";
  // integer array
  int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // reference to integer array
  int& ra = *a;
  // pointer to string array
  string s[10] = {"foo", "bar", "baz"};
  // pointer to char pointer
  char** ppc = &pc;
  // integer const
  const int i = 1;
  // pointer to integer const
  const int* ip = &i;
  // const pointer to integer
  int *const cp = a;
}
