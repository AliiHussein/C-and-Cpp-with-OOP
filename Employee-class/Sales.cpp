#include "Sales.h"
#include <iostream>
#include <string>
using namespace std;

void Sales::set_gross_sales(float g)
{
    gross_Sales = g;
}

void Sales::set_commision_rate(float c)
{
    commission_rate = c;
}

double Sales::get_total_salary()
{
    return (salary + gross_Sales* commission_rate);
}

void Sales::print()
{
    Employee::print(); // Reusablitiy
    cout << "Gross Sales = " << gross_Sales << " ,Commission Rate= " << commission_rate << endl;
}

Sales::Sales()
{
    gross_Sales = 0.0;
    commission_rate = 0.0;
}

Sales::Sales(string n, int id, double s, float g, float c): Employee(n, id, s)
{
    gross_Sales = g;
    commission_rate = c;
}

Sales::~Sales()
{
}
