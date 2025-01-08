
#include <iostream>
#include <cstdlib> //has rand function
#include <vector>
#include <string>
#include <cctype>

using std::string;
using std::vector;

void randomize(int min, int max, int rolls);
void randomize(const char*);
void displayResults(int rollResults[], int rolls);
void displayResults(vector<string>);
bool containsInts(const string& input);
bool containsChars(const string& input);
