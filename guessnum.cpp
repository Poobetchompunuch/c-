#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); 
	num = rand() % 10 + 1; 
	cout << "###Welcome to guessing number game###\n";
	cout << "Secret number has been chosen\n";


	do
	{
		cout << "Guess the number (1 to 10) : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "The secret number is higher\n";
		else if (guess < num)
			cout << "The secret number is lower\n";
		else{
			cout << "Congratulations!" << endl;
			cout << "The secret number is " << guess << endl;
			cout << "You made " << tries << " guesses" << endl;
		}
		

	
	} while (guess != num);

	return 0;
}
