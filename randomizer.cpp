#include <iostream>
#include <cstdlib> //has rand function
#include <vector>
#include <string>
#include <cctype>
#include "randomizer.h"

using std::cout;
using std::endl;

void randomize(int min, int max, int rolls) { //int randomizer
    int random_num;
    int rollResults[rolls];
    for(int i=0; i < rolls; i++)
    {
        random_num = rand() % (max - min + 1) + min;
        rollResults[i] = random_num;
    }
    displayResults(rollResults, rolls);
}

void randomizer(char* input) { 
    size_t size(0);

    while(input[size] != '\0') {
        size++;
    }
    for (size_t i = size-1; i > 0; i--) {

        int x = rand() % (i + 1);

        char temp = input[i];
        input[i] = input[x];
        input[x] = temp;
    }
}


void displayResults(int rollResults[], int rolls) {
    cout << "Roll#:     ";
    for(int i =0; i < rolls; i++) {
        cout << i+1 << " ";
    }
    cout << endl;
    cout << "Results:   ";
    for(int i=0; i < rolls; i++) {
            cout << rollResults[i] << " ";
        }
    cout << endl << endl;
}

void displayResults(const char* temp) {
    
}

bool containsInts(const string& input) {
    for(char c : input) {
        if(!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}

bool containsChars(const string& input) {
    for(char c : input) {
        if(!std::isalpha(c)) {
            return false;
        }
    }
    return true;
}