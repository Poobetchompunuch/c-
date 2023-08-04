#include <iostream>
#include <string>
using namespace std;
int main()
{   
	
	float age,height,weight;
    string gen;
    
	cout << "Enter Age : ";
	cin >> age;
	cout << "Enter Gender : ";
	cin >> gen;
	cout << "Enter Height : ";
	cin >> height;
	cout << "Enter Weight : ";
	cin >> weight;
	
	cout <<"your age is "<< age << "\n";
	cout <<"your gender is "<< gen << "\n";
	cout <<"your height is "<< height << "\n";
	cout <<"your weight is "<< weight << "\n";
	float BMI = weight/(height/100*height/100);
    cout << "your BMI is " << BMI << "\n";
	
	 if (BMI < 18.5) {
        cout << "you are underweight"<< "\n";;
    } else if (BMI>18.5 & BMI < 24.9) {
        cout << "You are healthy"<< "\n";;
    } else if(BMI>25 & BMI < 29.9) {
        cout << "You are overweight"<< "\n";;
    }else if(BMI>30) {
        cout << "You are Obese"<< "\n";;
     
    }
   
	

    
	system("pause");
	return (0);
}