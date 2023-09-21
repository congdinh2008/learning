#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Declare an array of 5 doubles
    // index 0 to 4
    // Luon luon phai co kich thuoc cua mang
    double arr[] = {1.2, 2.4, 3.14, 4.02, 5.5};

    // Print out the 2nd element
    // cout << "The 2nd element is: " << arr[1] << endl;

    // Print out the 6th element
    // cout << "The 5th element is: " << arr[5] << endl;
    // cout << "The 6th element is: " << arr[6] << endl;

    // Print out address of 1st element
    cout << "Address of 1st element = " << arr[0] << " - " << &arr[0] << endl;
    cout << "Address of 2nd element = " << arr[1] << " - " << &arr[1] << endl;
    cout << "Address of 3nd element = " << arr[2] << " - " << &arr[2] << endl;
    cout << "Address of 4th element = " << arr[3] << " - " << &arr[3] << endl;
    cout << "Address of 5th element = " << arr[4] << " - " << &arr[4] << endl;
    return 0;
}
