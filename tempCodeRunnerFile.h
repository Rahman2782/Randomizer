#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <iostream>
#include <cstdlib> //has rand function
#include <vector>
#include <string>
#include <cctype>

using std::string;
using std::vector;

void displayResults(int rollResults[], int rolls);
void displayResults(vector<string>);
bool containsInts(const string& input);
bool containsChars(const string& input);
void randomize(const string& input, size_t rolls);
void convertStringToChar(const string& input);

#endif //RANDOMIZER_H