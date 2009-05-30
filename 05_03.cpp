#include <iostream>
#include <string>
using namespace std;

int main()
{
  // unsigned char
  unsigned char uc = 'c';
  cout << uc;
  // const unsigned char
  const unsigned char ucc = 'c';
  cout << ucc;
  
  // integer pointer
  int i = 1;
  int* pi =  &i;
  // pointer to char pointer
  char* pc = "c";
  char** ppc = &pc; 
  // pointer to char array
  char ca[3] = {'a', 'b', 'c'};
  char* pca = ca;
  // int pointer array
  int* ipa[7] = {&i, &i, &i, &i, &i, &i, &i};
  // pointer to int pointer array
  int** pipa = ipa;
  // typedef - ?
}
