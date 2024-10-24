#include "Student.h"
#include<iostream>
using namespace std;

Student::Student() : Human()
{
    vuz = nullptr;
}

Student::Student(const char* n, int a, const char* v) : Human(n, a)
{
    cout << "Student construct!\n";
    vuz = new char[strlen(v) + 1];
    strcpy_s(vuz, strlen(v) + 1, v);
}


void Student::Output()
{
    cout << "Student Output\n";
    Human::Output();
    cout << "Vuz: " << vuz << "\n\n";
}
Student::~Student()
{
    cout << "Student destruct..\n";
    delete[] vuz;
}

