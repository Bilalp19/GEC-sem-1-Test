#include <iostream>
using namespace std; 


int main() 
{
	int num = 1; 
	cout << "num =" << num << endl; 
	cout << "Increment Operator before num = " << ++num << endl;
	cout << "numb after = " << num << endl; 

	num = 1; 
	
	cout << "num = " << num << endl;
	cout << "Increment Operator after num = " << num++ << endl;
	cout << "num after = " << num << endl;

	num = 1; 
	
	cout << "num =" << num << endl;
	cout << "Decremenet Operator after num = " << --num << endl;
	cout << "numb after = " << num << endl;

	num = 1; 

	cout << "num =" << num << endl;
	cout << "Decremenet Operator after num = " << num-- << endl;
	cout << "numb after = " << num << endl;

	return 0;
}