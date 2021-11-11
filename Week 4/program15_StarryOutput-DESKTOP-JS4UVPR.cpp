#include <iostream>
using namespace std;

int main()
{
	int userNumber;


	cout << "Please enter a number between 1 - 10" << endl; 
	cin >> userNumber;
	for (int y = 0; y < userNumber; y++)
	{
		for (int x = 0; x < userNumber; x++)
		{
			cout << "*";
		}
		cout << endl;
	}	

}