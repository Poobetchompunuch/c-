#include <iostream>
#include <string>
using namespace std;
int main()
{
	float s;
	

    cout << "input c++ Score : ";
    cin >> s;
    cout << "You" <<((s>=50)?" pass ":" fail ")<<"with score = "<< s <<endl;
  
    return (0);
}