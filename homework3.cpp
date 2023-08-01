#include <iostream>
using namespace std;
int main()
{
	int mt, fl;
	float qmax, total, q1, q2, q3;
	cout << "========QUIZZS========\n";
	cout << "Enter final quizz(10) : ";
	cin >> q1;
	cout << "Enter second  quizz(10) : ";
	cin >> q2;
	cout << "Enter second  quizz(10) : ";
	cin >> q3;
	cout << "========MID-TERM========\n";
	cout << "Enter mid-term(40) : ";
	cin >> mt;
	cout << "========FINAL========\n";
	cout << "Enter final(50) : ";
	cin >> fl;
	qmax = ((q1 + q2 + q3) / 3);
	total = qmax + fl + mt;

	cout << "Quizz Total :  " << qmax << endl;
	cout << "mid term : " << mt << endl;
	cout << "Final : " << fl << endl;
	cout << "total : " << qmax + mt + fl << endl;
	cout << "Your score is " << ((total >= 50) ? "pass" : "fail") << endl;

	system("pause");
	return (0);
}