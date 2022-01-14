#include <iostream>
using namespace std;

#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"

int main()
{
    Pet* petPointer = new Pet(4, 4);
    int userInput;
    cout << "1. Dog \n 2.Cat \n 3. Hamster \n" << endl << "enter your choice";
    cin >> userInput;
    switch (userInput)
    {
    case 1:
        petPointer = new Dog(0, 0);
        break;
    case 2:
        petPointer = new Cat(0, 0);
        break;
    case 3:
        petPointer = new Hamster(0, 0);
        break;
    default:
        petPointer = new Pet(0, 0);
        break;
    }

    bool runnningGame = true;
    while (runnningGame)
    {
        cout << "0. Quit \n 1. Listen to your pet \n 2. Feed your pet  \n 3. Play with the pet \n" << endl;
        cin >> userInput;
        switch (userInput)
        {
        case 0:
            runnningGame = false;
            break;
        case 1:

            petPointer->Talk();
            break;
        case 2:
            petPointer->Feed();
            break;
        case 3:
            petPointer->Play();
            break;


        default:
            //petPtr->Talk();
            break;
        }
    }

    return 0;

}