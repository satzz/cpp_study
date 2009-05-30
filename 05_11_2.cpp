#include <iostream>
#include <string>
#include <list>
using namespace std;
typedef list<string>::const_iterator SI;

int main(void) {
  list<string> s_list;
  string c;
  while (1) {
    cout << "\n> ";
    cin >> c;
    if (c == "Quit") {
      break;
    }
    s_list.push_back(c);
    s_list.sort();
    s_list.unique();
    for (SI s_ite = s_list.begin(); s_ite != s_list.end(); ++s_ite) {
      cout << *s_ite << '\n';
    }
  }
}
  
