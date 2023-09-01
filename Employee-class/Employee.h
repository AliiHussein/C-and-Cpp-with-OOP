#pragma once
#include <string>
using namespace std;

// Class Employee is an abstract class because it contain 1 pure virtual function
// Which means that I can not create an instance from it
class Employee
{
protected:
    string name;
    int ID;
    double salary;
public:
    virtual double get_total_salary() = 0; // pure virtual function (Must be overridden)
    virtual void print(); // virtual function (Can be overridden, optional)
    Employee(); // default constructor
    Employee(string n, int id, double s); // parameterized constructor
    ~Employee(); // destructor
};