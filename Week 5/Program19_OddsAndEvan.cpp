#include <iostream>
using namespace std;

void result(int numODD, int oddTOTAL, int numEVEN, int evenTOTAL);

bool oddOrEven(int num);


int main()
{
    int userInput;
    int evenNum;
    int oddNum;

    int oddSum, evenSum;

    bool even;
    bool odd;


    cout << "Please enter any 10 numbers" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> userInput, i;
        oddOrEven(userInput);
    }

    if (even % 2 == 0);

    else (odd % 2 != 0);

    result(oddNum, oddSum, evenNum, evenSum);

    return 0;
}

bool oddOrEven(int num)
{

    if (num % 2 == 0)
    {
        cout << "even" << endl; 
        even = true;
        odd = false;
       evenNum++;
        evenSum += num;
        return even, odd;
    }

    if (num % 2 != 0)
    {
        cout << "Odd" << endl;
        odd = false;
        even = true;
        /*oddNum++;
        oddSum += num;*/
        return even, odd;
    }


}

void result(int numODD, int oddTOTAL, int numEVEN, int evenTOTAL)
{
    cout << "Number of odds: " << numODD << endl;
    cout << "Number of even: " << numEVEN << endl;

    cout << "Total even: " << evenTOTAL << endl;
    cout << "Total odd: " << oddTOTAL << endl;
}
