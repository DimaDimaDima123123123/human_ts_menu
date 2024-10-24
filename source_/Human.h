#pragma once
class Human
{
protected:
    char* name;
    int age;
public:
    Human();
    Human(const char*, int);
    virtual void Output();
    virtual ~Human() = 0; 
};
