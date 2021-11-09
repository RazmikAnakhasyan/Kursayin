#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "stack.h"
using namespace std;
struct Student
{
    string Name;
    short grade;
    short absence;
    short reprimand;
    int MaxAbsence;
    void Print();
    void SetOtions();
    void ReturnMaxAbsence(Stack<Student>& StudentsList);
    void ReturnMaxAbsenceList(Stack<Student>& StudentsList);
};

void Student::ReturnMaxAbsence(Stack<Student>& StudentsList)
{
    int Position = 0;
    MaxAbsence = StudentsList[0].data.absence;
    for (int i = 0;i <= StudentsList.size - 1;i++)
    {

        if (StudentsList[i].data.absence > MaxAbsence) {
            MaxAbsence = StudentsList[i].data.absence;
            Position = i;
        }
    }
    StudentsList[Position].data.Print();
}
void Student::ReturnMaxAbsenceList(Stack<Student>& StudentsList)
{
    MaxAbsence = StudentsList[0].data.absence;
    for (int i = 0;i < StudentsList.size - 1;i++)
    {

        if (StudentsList[i].data.absence >= MaxAbsence) {
            MaxAbsence = StudentsList[i].data.absence;
        }
    }
    for (int i = 0;i <= StudentsList.size - 1;i++)
    {

        if (StudentsList[i].data.absence == MaxAbsence) {

            StudentsList[i].data.Print();
        }
    }

}
void Student::SetOtions()
{
    cout << "Pleaze Enter Name Of Student:";
    cin >> Name;
    cout << "\n";
    cout << "Pleaze Enter absence Of Student:";
    cin >> absence;
    cout << "\n";
    cout << "Pleaze Enter grade Of Student:";
    cin >> grade;
    cout << "\n";
    cout << "Pleaze Enter reprimand Of Student:";
    cin >> reprimand;
    cout << "\n";
}

void Student::Print()
{
    cout << "Name " << Name << "\n"
        << "Absence " << absence << "\n"
        << "Grade " << grade << "\n"
        << "Reprimand " << reprimand << "\n\n";
}

#endif // STUDENT_H
