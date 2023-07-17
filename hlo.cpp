#include <iostream>
#include <string>
using namespace std;
int main()
{   
  string name;
  int sala;
  int sale;
  float com;
  cout << "Enter name : ";
  cin >>name;
  cout << "Enter Salary : ";
  cin >>sala;
  cout << "Enter Sale : ";
  cin >>sale;
  cout << "Enter Commission percent : ";
  cin >>com;
  cout <<"---------output---------\n";
  cout <<"Your name  = "<< name <<endl;
  cout <<"Total Revenue "<<sala+(sale*(com/100))<<" Bath"<<endl;
  system("pause");  
  return(0);
}