#include <iostream>
#include <string>
using namespace std;

// Declare function to convert string to uppercase
void convertToUppercase(string &name);

int main(int argc, char const *argv[])
{
    // 1. Create a string name
    string name = "Cong";
    // 2. Print the string
    cout << "The string: " << name << endl;
    // 3. Convert to uppercase
    convertToUppercase(name);
    // 4. Print the result
    cout << "The string after convert to uppercase: " << name << endl;
}

// Implement function to convert string to uppercase
void convertToUppercase(string &name)
{
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = toupper(name[i]);
    }
}