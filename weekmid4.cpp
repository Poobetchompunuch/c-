#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void input();
void view();
void show();
int num;
int quiz[100];
int mid[100];
int final[100];

int main()
{   char a;
	
    do{
	    cout << "**************************" << endl;
	    cout << "Select Menu               " << endl;
	    cout << "**************************" << endl;
	    cout << "1.Input student records   " << endl;
	    cout << "2.View all student records" << endl;
	    cout << "3.Show a student by ID    " << endl;
	    cout << "4.Exit                    " << endl;
	    cout << "**************************" << endl; 

	    cout << "Select Menu : ";
	    cin >> a;
		 if(a == '1') input();
	   else if(a == '2') view();
	   else if(a == '3') show();
	   else if(a == '4') cout<<"Exit"<<endl;
	   else cout<<"Worng Menu"<<endl;
	
	  }while (a !='4');

   system("pause");
   return 0;
}
void input()
{   cout<<"Input Number of Student : ";
    cin>>num;
	for(int i=0;i<num;i++)
  {
   cout<<"Number"<< i+1 <<endl; 
   cout<<"Input Quiz : ";
   cin>>quiz[i];
   cout<<"Input Midterm : ";
   cin>>mid[i];
   cout<<"Input Final : ";
   cin>>final[i];
	}
}
void view()
{  
   cout<<"---------------------------------------------------------"<<endl;
   cout<<"StdID\t\tQuiz\t\tmidterm\t\tMidterm\n";
   cout<<"---------------------------------------------------------"<<endl;
   
   for(int i=0;i<num;i++)
 {
   cout<<i+1<<"\t\t"<<quiz[i]<<"\t\t"<<mid[i]<<"\t\t"<<final[i]<<endl;
  }
   cout<<"---------------------------------------------------------"<<endl;
} 
void show()
{  int id;
	cout<<"Input ID : ";
    cin>>id;
	for(int i=0;i<num;i++)
	{ if(id == i+1)
	   {cout<<"---------------------------------------------------------"<<endl;
        cout<<"StdID\t\tQuiz\t\tmidterm\t\tMidterm\n";
        cout<<"---------------------------------------------------------"<<endl;
	    cout<<i+1<<"\t\t"<<quiz[i]<<"\t\t"<<mid[i]<<"\t\t"<<final[i]<<endl;
	     cout<<"---------------------------------------------------------"<<endl;
     }else{
		 cout<<"Your ID is not found"<<endl;
		 break;
	}
  
} 
	}
