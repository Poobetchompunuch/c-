#include <iostream>
#include <string>
using namespace std;
int main()
{   
  string Name;
  int Birth;
  cout << "Enter name : ";
  cin >> Name;
  cout << "Enter Year of birth : ";
  cin >> Birth;
  cout << "\nHello, " << Name << "." << endl;
  cout << "You Age = "<< (2566-Birth) << " year old." << endl;
  system("pause");
  return(0);
}