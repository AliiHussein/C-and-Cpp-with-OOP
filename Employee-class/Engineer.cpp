#include "Engineer.h"
#include <iostream>
#include <string>
using namespace std;

void Engineer::set_overTime_hours(int oth)
{
    overtime_hours = oth;
}

void Engineer::set_overTime_rate(float othr)
{
    overtime_hour_rate = othr;
}

double Engineer::get_total_salary()
{
    return (salary + overtime_hours * overtime_hour_rate);
}

void Engineer::print(){
    Employee::print();
    cout << "Speciality= " << speciality << " ,Experience= " << experience;
    cout << " ,Overtime hours= " << overtime_hours << " ,Overtime hour rate= " << overtime_hour_rate << endl;
}

Engineer::Engineer()
{
    speciality = "none";
    experience = 0;
    overtime_hours = 0;
    overtime_hour_rate = 0.0;
}

Engineer::Engineer(string n, int id, double s, string sp, int e, int oth, float othr): Employee(n,id,s)
{
    speciality = sp;
    experience = e;
    overtime_hours = oth;
    overtime_hour_rate = othr;
}

Engineer::~Engineer()
{
}