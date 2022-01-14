#include <iostream>
#include<string>
#include<algorithm>
using namespace std; 




int main() 
{
	string userInput;
	string myInput = "xx"; 
	cout << "Please Enter a Sentance " << endl;
	getline(cin, userInput);
	cout << "The sentance contains: " << userInput << endl;
	userInput.replace(25, 50, myInput );
	
	
	

	
	

}