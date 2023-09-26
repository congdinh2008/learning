#include <iostream>
using namespace std;

// Create class Course
class Course
{
private:
    int id;
    string name;
    double duration;

public:
    Course();
    Course(int id, string name, double duration);
    void DisplayInfo();
};

Course::Course()
{
    cout << "I am a constructor" << endl;
}

Course::Course(int id, string name, double duration)
{
    this->id = id;
    this->name = name;
    this->duration = duration;
}

void Course::DisplayInfo()
{
    cout << "Id: " << this->id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Duration: " << this->duration << endl;
}

int main(int argc, char const *argv[])
{
    Course toan = Course();

    Course ly = Course(1, "Vat Ly", 3.5);

    ly.DisplayInfo();
    return 0;
}
