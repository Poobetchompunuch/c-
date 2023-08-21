#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{   int num,score,max = 0,sum=0; 
    float avg;
	srand(time(NULL));
    num = 1+rand()%10;
    cout <<"Random number of student(1-10) : "<<num<<endl;
	for(int i = 1 ;i<=num ; i++)
	{  cout<<"Input Score :"<<i<<" : ";
	   cin>>score;
	   if(score>max)
	   { max= score;
	   }
	   sum = sum + score;
	}
	avg=sum/sum;
	cout<<"Max score = "<<max<<endl;
	cout<<"Sum score = "<<sum<<endl;
	cout<<"Average score= "<<fixed<<setprecision(2)<<avg<<endl;
	system("pause");
    return 0;
}