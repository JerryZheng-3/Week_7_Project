#include <iostream>
#include <string>
#include <sstream>
using namespace::std;
#include "Mystring.h"

int main() {
    //Mystring mystring; // default constructor will be called
    Mystring DateOfToday("June7th2025");
    cout << DateOfToday.GetString() << endl;

    // Testing for setters
    const int MAX_WORDS = 100;
    Mystring words[MAX_WORDS];
    int count;
    string line;
    stringstream sstrm;
    char word[50];

    // Read line entered by the user and configure a stringstream for word breaking
    cout << "Enter a sentence:";
    getline(cin, line);
    sstrm.str(line);
    // Break into words and stuff them into an array
    count = 0;
    while (count < MAX_WORDS && sstrm >> word) {
        words[count++].SetString(word);
    }

    Mystring s;
    s.SetString("Hello"); // new char
    // check whether before this moment, a new char have already declared. if so, delete[]
    s.SetString("Wed");   // new char

    cout << s.GetString();

    return 0;

    // destructor for object "s" will only be called once. Memory leak will happen.
}