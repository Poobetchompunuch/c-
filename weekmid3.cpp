#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{   
	string name[4];
	int score[4],i;
	int total = 0,max = 0,min;
    for(int i=0;i<4;i++)
  {
   cout<<"Enter name["<< i <<"]: ";
   cin>>name[i];
   cout<<"Enter score["<< i <<"]: ";
   cin>>score[i];
   
  }  
	min=score[0];
   cout<<"-------------------------\n";
   cout<<"Name			Score\n";
   cout<<"-------------------------\n";
   for(int i=0;i<4;i++)
   
  {
   cout<<name[i]<<"			"<<score[i]<<endl;
   total = total+score[i];
   if(score[i]>max)
	   max=score[i];
   if(score[i]<= min)
	   min=score[i];
  }
   cout<<"-------------------------\n";
   cout<<"Max Score = "<<max<<endl;
   cout<<"Min Score = "<<min<<endl;
   cout<<"Total     = "<<total<<endl;
   cout<<"Averrage  = "<<(float)total/4<<endl;
   
   system("pause");
   return 0;
}

    