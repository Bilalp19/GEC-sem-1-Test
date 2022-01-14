

#include <iostream>
using namespace std;


int main()
{
	string A = "[1]I'm too young to die!";
	string B = "[2]Hey, not to rough!";
	string C = "[3]Hurt me plenty.";
	string D = "[4]Ultra-Violence";
	string E = "[5]Nightmare...";


	cout << A << endl;
	cout << B << endl;
	cout << C << endl;
	cout << D << endl;
	cout << E << endl;

	int playerInput;

	cout << "Choose a difficulty " << endl;
	cin >> playerInput;




	switch (playerInput)
	{
	case 1:
		cout << "I'm too young to die!";
		cout << " This is the diffuclty you picked!" << endl;
		break;

	case 2:
		cout << "Hey, not to rough!";
		cout << " This is the diffuclty you picked!" << endl;
		break;
	case 3:
		cout << "Hurt me plenty";
		cout << " This is the diffuclty you picked!" << endl;
		break;
	case 4:
		cout << "Ultra-Violence";
		cout << " This is the diffuclty you picked!" << endl;
		break;
	case 5:
		cout << "Nightmare...";
		cout << " This is the diffuclty you picked!" << endl;
		break;

	default:
		cout << "You havent picked a difficutly.";
		cout << "Bye!" << endl;
		break;

	}


}
