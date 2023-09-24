#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        arr[i] = rand() % 30;
    
    cout << "Element Value histogram\n";
    cout << "\nIndex\t\tValue\t\tHistogram\n";
    for (int i = 0; i <= 9; i++)
    {
        cout << i <<"\t\t"<< arr[i] <<"\t\t";
        for (int j = 1; j <= arr[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

   

}