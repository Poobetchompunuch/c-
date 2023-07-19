#include<iostream>
using namespace std;

int main() {
	int Cus_money;
	int Bank_pun;
	int temp;
	int Bank_har;
	int Bank_roi;
	int Bank_harsib;
	int Bank_yee;
	


	cout << "Amount to be withdraw :";
	cin >> Cus_money;

	if (Cus_money > 1000) {
		Bank_pun = Cus_money / 1000;
		temp = Cus_money % 1000;
		if (temp >= 500) {
			Bank_har = temp / 500;
			Bank_roi = temp / 100 - 5;
		}
		else {
			Bank_har = 0;
			Bank_roi = temp / 100;
		}
		if (temp < 500)
			Bank_roi = (temp / 100);

		temp = temp % 100;
		Bank_harsib = temp / 50;
		temp = temp % 50;
		Bank_yee = temp / 20;
		temp = temp % 20;
		
		



	}
	cout << "1000 = " << Bank_pun << endl;
	cout << "100 = " << Bank_roi << endl;
	cout << "50 = " << Bank_harsib << endl;
	cout << "20 = " << Bank_yee << endl;
	
	system("Pause");
	return 0;
}