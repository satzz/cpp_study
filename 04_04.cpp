#include <iostream>
using namespace std;
int main() {
  char c = '0';
  for (int i=0;i<10;i++) {
    cout << c << " " << int(c) << "\n";
    c++;
  }
  c = 'a';
  for (int i=0;i<26;i++) {
    cout << c << " " << int(c) << "\n";
    c++;
  }
}
