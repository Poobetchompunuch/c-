#include <iostream>
using namespace std;
int main()
{
	char a, b, c;

	cout << "Enter Character (A,B,C) : ";
	cin >> a;

	if (a == 'A')
	{
		a = 10;


	}
	else if (a == 'B')
	{
		a = 20;


	}
	else if (a == 'C')
	{
		a = 30;


	}

	cout << "Enter Character (A,B,C) : ";
	cin >> b;

	if (b == 'A')
	{
		b = 10;


	}
	else if (b == 'B')
	{
		b = 20;


	}
	else if (b == 'C')
	{
		b = 30;

	}



	cout << "Enter Character (A,B,C) : ";
	cin >> c;

	if (c == 'A')
	{
		c = 10;


	}
	else if (c == 'B')
	{
		c = 20;


	}
	else if (c == 'C')
	{
		c = 30;


	}

	cout << a + b + c << endl;
	system("pause");
	return (0);
}