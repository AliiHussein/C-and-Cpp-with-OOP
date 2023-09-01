#pragma once
#include "Employee.h"
#include <string>
using namespace std;

class Engineer: public Employee
{
private:
    string speciality;
    int experience;
    int overtime_hours;
    float overtime_hour_rate;
public:
    void set_overTime_hours(int oth);
    void set_overTime_rate(float othr);

    double get_total_salary();
    void print();

    Engineer();
    Engineer(string n, int id, double s, string sp, int e, int oth, float othr);
    ~Engineer();

};