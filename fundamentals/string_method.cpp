#include <iostream>

using namespace std;

int main ()
{
    // To show the length of string variable we use the "length()" or "size()"function.
    string myString = "Learning C++!";
    cout << "Length of my string:" << myString.length() << endl;
    cout << "Length of my string:" << myString.size() << endl;


    // We can use [i] to access a specific character in the string, i is within the range of the string length.
    cout << "First character of my string: " << myString[0] << endl;

    // "at()" is similar to [i], but it performs bounds checking and throws an exception if the index is our of range.
    cout << "First character of my string:" << myString.at(0) << endl;

    // "empty()" checks if the string is empty, output is true or false.
    cout << "Is my string empty?\n" << myString.empty() << endl;

    // "clear()" removes all characters from the string.
    myString.clear();
    cout << "Is my string empty after using clear()?\n" <<myString.empty() << endl;

    // "front()" returns the first character of the string.
    cout << "First character of myString is:" << myString.front() << endl;

    // "back()" returns the last character of the string.
    cout << "Last character of myString is:" << myString.back() << endl;

    // "find(str)" searches for the first occurrence of the substring "str" and returns its position.
    
    return 0;
}