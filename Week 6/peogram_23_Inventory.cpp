//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int MAX_ITEMS = 4;
//    int numItems = 0;
//    string inventory[MAX_ITEMS];
//    inventory[numItems++] = "Sword";
//    inventory[numItems++] = "Battle Axe";
//    inventory[numItems++] = "Healing Potion";
//    inventory[numItems++] = "Dagger";
//
//    string userAnswer;
//
//    Back:
//
//    cout << "You Have picked up a wizards staff, would you like to swap it for a dagger 'Y' for yes and 'N' for no?" << endl;
//    cin >> userAnswer;
//    if (userAnswer == "Y")
//    {
//
//
//        cout << "You have left the staff behind" << endl;
//        cout << "This is your inventory: " << endl;
//        for (int i = 0; i < MAX_ITEMS; i++)
//        {
//            cout << inventory[i] << endl;
//        }
//    }
//
//
//
//    else if (userAnswer == "N")
//    {
//
//
//        cout << "Here is your inventory" << endl;
//        inventory[3] = "wizard staff";
//        for (int i = 0; i < MAX_ITEMS; i++)
//        {
//            cout << inventory[i] << endl;
//        }
//
//    }
//
//    else if (userAnswer != "Y" && "N")
//    {
//        goto Back;
//    }
//
//
//
//}