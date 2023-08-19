#include "Employee.h"
#include <iostream>
using namespace std;

void Employee::print()
{
    cout << "Name= " << name << " ,ID= " << ID << " ,Salary= " << salary << endl;
}

Employee::Employee(string n, int id, double s)
{
    name = n;
    ID = id;
    salary = s;
}

Employee::Employee()
{
    name = "none";
    ID = -1;
    salary = 0.0;
}

Employee::~Employee()
{
}
