#include "Student.h"
#include "Teacher.h"
#include<iostream>
using namespace std;

int main()
{
    Human* ptr = nullptr;
    int choice;

    cout << "Who do you want to create?\n";
    cout << "1 — Student\n";
    cout << "2 — Teacher\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        ptr = new Student("Mykola", 20, "Politex");
        break;
    case 2:
        ptr = new Teacher("Maria", 30, "School #17", "Physics");
        break;
    default:
        cout << "Error: invalid choice.\n";
        return 1;
    }

    ptr->Output();
    delete ptr;

    system("pause");
    return 0;
}
