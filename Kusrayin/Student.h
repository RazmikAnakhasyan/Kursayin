#include <iostream>
using namespace std;
struct Student
{
    string Name;
    short grade;
    short absence;
    short reprimand;
    void Print();
    void SetOtions();
};

void Student::SetOtions()
{

}

void Student::Print()
{
    cout << "Name " << Name << "\n"
        << "Absence " << absence << "\n"
        << "Grade " << grade << "\n"
        << "Reprimand " << reprimand << "\n\n";

}

