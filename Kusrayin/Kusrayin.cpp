#include "stack.cpp"
using namespace std;
int main()
{
    Stack<int> StudentList;
    int Element;
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
        cin >> Element;
        StudentList.Push(Element);
        cout << "\n Element Created ";
        break;
    case '2':
        return 0;
        break;
    default:
        return 0;
        break;
    }
    while (Start == true) {
        cout << "Pleaze Type \n'1' For Add Element"
            "\n\n'2' For Delete Element"
            "\n\n'3' For Print List Of Students"
            "\n\n'4' For Delete Element In Position"
            "\n\n'5' For Add Element In Position"
            "\n\n'6' For Get Information About User"
            "\n\n'7' For Exit"
            "\n->";
        cin >> Countinue;
        switch (Countinue) {
        case '1':
            cin >> Element;
            StudentList.Push(Element);
            break;
        case '2':
            StudentList.Pop();
            cout << "\nLast Added Element Deleted!!!\n";
            system("pause");
            break;
        case '3':
            for (int i = 0;i < StudentList.size;i++) {
                cout << StudentList[i].data;
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
            cin >> Element;
            cout << "\nSize Of Your List Equal to " << StudentList.size << " Pleaz Input Number Less Then " << StudentList.size << "\n->";
            cin >> Position;
            StudentList.Push(Position, Element);
            break;
        case '6':
            cout << "\nInput Index Of Element To Get Information About Your List Size Equal To " << StudentList.size << "\n->";
            cin >> Position;
           cout <<  StudentList[Position - 1].data;
            system("pause");
            break;
        case '7':
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
