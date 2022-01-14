//#include <iostream>
//using namespace std;
//
//void inputDetails(int* n1, int* n2);
//void outputDetails(int& interger1, int& interger2, int* pointer);
//
//
//int main()
//{
//
//	int numb1;
//	int numb2;
//
//	int* Pnum = &numb1;
//
//	cout << "Please enter two numbers" << endl;
//	inputDetails(&numb1, &numb2);
//	outputDetails(numb1, numb2, Pnum);
//
//	cout << "Reassigning the pointer to the point at numb2" << endl;
//	Pnum = &numb2;
//	outputDetails(numb1, numb2, Pnum);
//	Pnum = NULL;	
//
//	cout << "Pnum is: " << (Pnum) << endl;
//
//	
//}
//
//void inputDetails(int* n1, int* n2)
//{
//	cin >> *n1;
//	cin >> *n2;
//}
//
//void outputDetails(int& interger1, int& interger2, int* pointer)
//{
//	cout << "numb 1 value" << endl;
//	cout << interger1 << endl;
//	cout << "\n" << endl;
//	cout << "numb 1 address in value" << endl;
//	cout << &interger1 << endl;
//	cout << "\n" << endl;
//	cout << "numb 2 value" << endl;
//	cout << interger2 << endl;
//	cout << "\n" << endl;
//	cout << "numb 2 address in value" << endl;
//	cout << &interger2 << endl;
//	cout << "\n" << endl;
//	cout << "pNumb value" << endl;
//	cout << &pointer << endl;
//	cout << "\n" << endl;
//	cout << "pNumb dereferanced value" << endl;
//	cout << *pointer << endl;
//	cout << "\n" << endl;
//	cout << "pNumb address" << endl;
//	cout << pointer << endl;
//
//}
