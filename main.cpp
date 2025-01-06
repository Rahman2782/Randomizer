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
    string input;

        cout << "Enter the value you want to randomize: ";
        cin >> input;

        option = containsInts(input); //error here - undeclared identifier function
        if(option == 1) {
            cout << "Enter the min and max number you can roll: ";
            cin >> min_value >> max_value;
            cout << "Enter the amount of times you want to roll: ";
            cin >> rolls;
            cout << endl;
            randomize(min_value, max_value, rolls);
            //randomize(input, rolls);
        }
   



}

