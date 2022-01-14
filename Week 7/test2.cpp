//#include <iostream>
//#include <string>
//#include <cmath>
//
//
//using namespace std;
//
//// method prototypes
//char getKeyLetter();
//string getstring();
//string maskLetter(string theString, char keyLetter);
//string removeLetter();
//int countKey();
//
//int main()
//{
//    char keyLetter;
//    string theString;
//
//    theString = getstring();
//    keyLetter = getKeyLetter();
//    getKeyLetter();
//    getstring();
//    maskLetter(theString, keyLetter);
//
//
//    cout << "String with '" << keyLetter << "' masked:\n";
//    cout << maskLetter(theString, keyLetter) << endl;
//
//    cout << "# of: " << endl;
//
//    return 0;
//}
//
//// gets inputs
//char getKeyLetter()
//{
//    string letter = "PLACEHOLDER";
//    char keyLetter;
//    while (letter.length() != 1)
//    {
//        cout << "Please enter a SINGLE letter to act as key:";
//        cin >> letter;
//    }
//
//    keyLetter = letter[0];
//    return keyLetter;
//}
//
//string getstring()
//{
//    string theString;
//    do {
//        cout << "Please enter a phrase or sentence >= 4: \n";
//        cin >> theString;
//    } while (theString.length() < 4);
//
//    return theString;
//}
//
////process inputs and send back to main.
//string maskLetter(string theString, char keyLetter)
//{
//    getKeyLetter();
//    keyLetter = '-';
//
//    return keyLetter + theString;
//}