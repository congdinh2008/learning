#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    // 1. Create a string with value "Cong"
    string name = "Cong";

    // Concatenate string
    name += " Dinh";

    // Print the string
    cout << "The string: " << name << endl;

    char charA = 'A';
    // print the character
    cout << "The character: " << charA << endl;

    // print the ASCII value of character
    cout << "The ASCII value of character: " << (int)charA << endl;

    // Convert character to B
    charA = charA + 1;

    // print the character
    cout << "The character: " << charA << endl;

    return 0;
}