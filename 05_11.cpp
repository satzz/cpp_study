#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string s[10];
  string c;
  int i = 0;
  while (1) {
    cout << "\n> ";
    cin >> c;
    if (c == "Quit") {
      break;
    }

    int flag = 0;
    for (int j = 0; j <= i; j++) {
      if (s[j] < c) {
        for (int k = i; k > j; k--) {
          s[k] = s[k-1];
        }
        s[j] = c;
        flag = 1;
        i++;
      }
      else if (c == s[j]) {
        flag = 1;
      }
      if (flag) {
        break;
      }
    }
    if (!flag) {
      s[i] = c;
    }
    for (int j = 0; j < i; j++) {
      cout << j << '\t' << s[j] << '\n';
    }
  }
}
  
