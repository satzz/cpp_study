#include <iostream>
#include <string>
using namespace std;

struct month {
  char* name;
  int days;
};

int main(void)
{
  cout << "--- 2 arrays version\n";

  char* month_name[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  int days_for_month[]   = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  for (int i = 0; i < 12; i++) {
    cout << month_name[i] << "\thas " << days_for_month[i] << "days\n";
  }

  cout << "--- struct array version\n";
  month months[] = {
    {"January", 31},
    {"February", 28},
    {"March", 31},
    {"April", 30},
    {"May", 31},
    {"June", 30},
    {"July", 31},
    {"August", 31},
    {"September", 30},
    {"October", 31},
    {"November", 30},
    {"December", 31},
  };
  for (int i = 0; i < 12; i++) {
    cout << months[i].name << "\thas " << months[i].days << "days\n";
  }
}
