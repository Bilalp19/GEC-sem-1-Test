#include <iostream>
using namespace std;

int main()
{

	int userNumber;
	char userResponse;
	
	do
	{
		cout << "Please enter a number between 1 - 10" << endl;

		cin >> userNumber;


		for (int y = 0; y < userNumber; y++)
		{
			for (int x = 0; x <= y; x++)
			{
				cout << "*";
			}
			cout << endl;
		}

		cout << "Do you wish to continue? [Y or N]  a?\n";

		cin >> userResponse;

		if (userResponse == 'n')
		{
			cout << "GOODBYE\n";

			system("pause");
		}

	} while (userResponse == 'y');
	{

	}
}

			