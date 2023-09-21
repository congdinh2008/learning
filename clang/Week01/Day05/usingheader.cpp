#include <iostream>
#include <ctime>

using namespace std;
int main(int argc, char const *argv[])
{
    time_t now = time(0);

    // chuyen doi now ve chuoi ~ string ~ char*
    string dt = ctime(&now);

    cout << dt << endl;
    return 0;
}
