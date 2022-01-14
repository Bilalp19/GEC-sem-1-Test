// Week 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap(int* pNum1, int* pNum2);

int main()
{
	int* pResult = new int;
	addTwoNumbers(10, 5, pResult);
	

	cout << "MAIN: The result is : " << *pResult << endl;

	delete pResult;
	
	return 0;
}


