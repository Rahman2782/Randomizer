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

    int choice(0);

    cout << "Welcome!" << endl;
    cout << "----------" << endl;
    cout << "1 = Number" << endl;
    cout << "2 = Word" << endl;
    cout << "3 = Exit" << endl;
    cout << "Choose an option: ";
    cin >> choice;

        switch(choice) {
            case 1: {
                int min_value(0);
                int max_value(0);
                size_t rolls(0);

                cout << "Enter the min and max number you can roll: ";
                cin >> min_value >> max_value;
                cout << "Enter the amount of times you want to roll: ";
                cin >> rolls;
                cout << endl;
                randomize(min_value, max_value, rolls);
                break;
            }
         

            case 2: {
                char statement[20];

                cout << "Enter the word you want to shuffle: ";
                cin >> statement;
                randomizer(statement);
                cout << statement << endl;
                break;
            }

            case 0: {
                char quit;
                do {
                    cout << "Are you sure? (Y/N to confirm): ";
                    cin >> quit;
                    if (quit == 'Y') {
                        break;
                    }
                } while (quit != 'Y' || quit != 'N');


            }
                
                

        }
           

   



}