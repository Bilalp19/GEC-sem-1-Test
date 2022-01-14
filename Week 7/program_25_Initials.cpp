#include <iostream>
#include <string>
using namespace std;



int main()
{
	char name[50];

	cout << "name:" << endl;
	cin.getline (name, 50 );
	

	for (int i = 0; i < strlen(name); i++)
	{
		if (name[i] == ' ')
		{
			cout << endl;
		}

		else 
		{
			cout << name[i];
		}
			
	}
		
	return 0;
	
}