#include "Human.h"
#include<iostream>
using namespace std;

Human::Human()
{
    name = nullptr;
    age = 0;
}

Human::Human(const char* n, int a)
{
    cout << "Human construct!\n";
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    age = a;
}

Human::~Human()
{
    cout << "Human destruct..\n";
    delete[] name;
}

void Human::Output()
{
    cout << "Human Output\n";
    cout << name << "\t" << age << endl;
}