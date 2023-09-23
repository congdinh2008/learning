#include <iostream>
#include <string>
using namespace std;

void reverse(string &name, int size);
string reverseReturn(string &name, int size);

int main(int argc, char const *argv[])
{
    // Create a string with value "Cong"
    string name = "Cong"; // => gnoC => Dpoh


    // Print the string
    cout << "The string: " << name << endl;

    // call reverse function
    reverse(name, name.length());

    // Print the result
    cout << "The string after reverse: " << name << endl;
}

// Implement function to reverse string
void reverse(string &name, int size)
{
    for (int i = 0; i <= size / 2; i++)
    {
        // Swap 2 characters
        char temp = name[i];
        name[i] = name[size - i - 1];
        name[size - i - 1] = temp;
    }
}

// Implement function to reverse string
string reverseReturn(string &name, int size)
{
    string result = "";
    for (int i = 0; i < size; i++)
    {
        result = name[i] + result;
    }
    return result;
}