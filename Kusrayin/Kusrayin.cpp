#include "stack.cpp"
#include "Student.h"
using namespace std;


int main()
{
    Stack<Student> StudentList;
    Student student;
    char Countinue = ' ';
    bool Start = false;
    int Position = 0;
    cout << "\t\t\t\t\tWelcome to My Project!!!\n";
    cout << "Pleaze Type \n'1' For Create List"
        "\n\n'2' For Exit Program\n->";
    cin >> Countinue;
    switch (Countinue) {
    case '1':
        Start = true;
        student.SetOtions();
        StudentList.Push(student);
        cout << "\n Student Created ";
        break;
    case '2':
        return 0;
        break;
    default:
        return 0;
        break;
    }
    while (Start == true) {
        cout << "Pleaze Type \n'1' For Add Student"
            "\n\n'2' For Delete Student"
            "\n\n'3' For Print List Of Students"
            "\n\n'4' For Delete Student In Position"
            "\n\n'5' For Add Student In Position"
            "\n\n'6' For Show Student With Max Absence Count"
            "\n\n'7' For Show All Students With Same Max Absence Count"
            "\n\n'8' For Get Information About User"
            "\n\n'9' For Exit"
            "\n->";
        cin >> Countinue;
        switch (Countinue) {
        case '1':
            student.SetOtions();
            StudentList.Push(student);
            break;
        case '2':
            StudentList.Pop();
            cout << "\nLast Added Student Deleted!!!\n";
            system("pause");
            break;
        case '3':
            for (int i = 0;i < StudentList.size;i++) {
                StudentList[i].data.Print();
            }
            system("pause");
            break;
        case '4':
            cout << "\nSize Of Your List Equal to" << StudentList.size << "Pleaz Input Correct Number->";
            cin >> Position;
            StudentList.Pop(Position - 1);
            cout << "\nStudent From Position " << Position << " Deleted!!!";
            system("pause");
            break;
        case '5':
            student.SetOtions();
            cout << "\nSize Of Your List Equal to " << StudentList.size << " Pleaz Input Number Less Then " << StudentList.size << "\n->";
            cin >> Position;
            StudentList.Push(Position, student);
            break;
        case '6':
            student.ReturnMaxAbsence(StudentList);
            system("pause");
            break;
        case '7':
            student.ReturnMaxAbsenceList(StudentList);
            system("pause");
            break;
        case '8':
            cout << "\nInput Index Of Student To Get Information About Your List Size Equal To " << StudentList.size << "\n->";
            cin >> Position;
            StudentList[Position - 1].data.Print();
            system("pause");
            break;
        case '9':
            return 0;
            break;
        default:
            return 0;
            break;
        }
        system("CLS");
    }



    return 0;

}
