#include "Teacher.h"
#include<iostream>
using namespace std;

Teacher::Teacher() : Human()
{
    school = nullptr;
    subject = nullptr;
}

Teacher::Teacher(const char* n, int a, const char* s, const char* subj) : Human(n, a)
{
    cout << "Teacher construct!\n";
    school = new char[strlen(s) + 1];
    strcpy_s(school, strlen(s) + 1, s);

    subject = new char[strlen(subj) + 1];
    strcpy_s(subject, strlen(subj) + 1, subj);
}

Teacher::~Teacher()
{
    cout << "Teacher destruct..\n";
    delete[] school;
    delete[] subject;
}

void Teacher::Output()
{
    cout << "Teacher Output\n";
    Human::Output();
    cout << "School: " << school << endl;
    cout << "Subject: " << subject << "\n\n";
}
