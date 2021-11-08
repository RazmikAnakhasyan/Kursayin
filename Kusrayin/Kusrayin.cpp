#include "stack.cpp"
using namespace std;

int main()
{
    Stack<Student> number;
    Student stdl;
    stdl.absence = 1;
    stdl.Name = "Razmik12";
    stdl.grade = 1;
    stdl.reprimand = 2;
    for (int i = 0;i <= 10;i++) {
        number.Push(stdl);

    }
    for (int i = 0;i <= 10;i++) {
        cout << number[i].data.Name << "\n";
    }
    return 0;

}
