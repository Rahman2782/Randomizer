#include <iostream>
#include <cstdlib> //has rand function
#include <vector>
#include <string>
#include <cctype>
#include "randomizer.h"
#include "randomizer.cpp"

using namespace std;

int main()
{
    srand(time(nullptr));

    int min_value(0);
    int max_value(0);
    size_t rolls(0);
    int option(0);
    int choice(0);
    char statement[20];

        cout << "Welcome!" << endl;
        cout << "----------" << endl;
        cout << "1 = Number" << endl;
        cout << "2 = Word" << endl;
        cout << "3 = Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the min and max number you can roll: ";
                cin >> min_value >> max_value;
                cout << "Enter the amount of times you want to roll: ";
                cin >> rolls;
                cout << endl;
                randomize(min_value, max_value, rolls);

            case 2: 
                cout << "Enter the word you want to shuffle: ";
                cin >> statement;


            case 0: {
                char quit;
                do {
                    cout << "Are you sure? (Y/N to confirm): ";
                    cin >> quit;
                    if (quit == 'Y') {
                        break;
                    }
                    else (quit != 'Y' || quit != 'N') {
                        cout << "ERROR - Pick an option again" << endl;
                    }
                } while (quit != 'Y' || quit != 'N');


            }
                
                

        }
           

   



}