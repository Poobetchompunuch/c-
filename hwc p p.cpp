#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void display(int num[3][3] , string name[3]);
float calgrade(int num);
void gpa(float p);
int main()
{   int num[3][3];
    string name[3];
    for(int i = 0;i < 3; i++ )
    {    cout<<"Student "<<i+1<<endl;
        cout<<"Enter Name ["<<i+1<<"] :";
        cin>>name[i];
        for(int j=0;j<3;j++)
        {    cout<<"Enter Score  ["<<i<<"]["<<j<<"] :" ;
            cin>>num[i][j];
        }
    }
display(num,name);
    system("pause");
    return 0;
}
void display(int num[3][3] , string name[3])
{
cout<<"Show Scores"<<endl;
    cout<<setfill('-')<<setw(40)<<""<<endl;
    cout<<"Student\tMath\tScience\tEnglish\tGPA\n";
    cout<<setfill('-')<<setw(40)<<""<<endl;

    for(int i=0;i<3;i++)
    {    float p=0.0;
cout<<i+1<<" "<<name[i]<<"\t";
        for(int j=0;j<3;j++)
{
cout << num[i][j] ;
p=calgrade(num[i][j])+p;
cout << "\t";
        }
gpa(p);
       
        cout<<endl;
    }
cout<<setfill('-')<<setw(40)<<""<<endl;
}
float calgrade(int num)
{
float p;
 if(num>79){
 cout << "(A)";
 p = 4;
 }
 else if( num>74 ){
 cout << "(B+)";
 p=3.5;}
 else if( num>69 ){
 cout << "(B)";
 p=3;
 }
 else if( num>64 ){
 cout << "(C+)";
 p=2.5;
 }
 else if( num>59 ){
 cout << "(C)";
 p=2;
 }
 else if( num>54 ){
 cout << "(D+)";
 p=1.5;
 }
 else if( num>49 ){
 cout << "(D)";
 p=1;
 }
 else if( num<50 ){
 cout << "(F)";
 p=0;
 }
 else
cout << "Your score out of range !!";
  return(p);
}
  void gpa(float p)
  { float gpa = 0;
gpa = p*3;
gpa = gpa/(3*3);
cout << fixed << setprecision(2) << gpa;
  }
