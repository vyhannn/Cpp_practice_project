#include <iostream>
#include <string>

using namespace std;

int main()
{
   string myString = "I'm learning C++. Do you wan to learn C++ with me?";
   string mySubString = "C++";
   size_t position = myString.find(mySubString);
   if (position != string::npos);
   {
    cout << "The position of the " << mySubString << " is: " << position << endl;
   }
   if (position == string::npos)
   {
    cout << "There is no occurence of the " << mySubString << "!" << endl;
   }

}