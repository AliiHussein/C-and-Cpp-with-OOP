#pragma once
#include "Employee.h"

class Sales: public Employee
{
private:
    float gross_Sales;
    float commission_rate;
public:
    void set_gross_sales(float g);
    void set_commision_rate(float c);

    double get_total_salary();
    void print();

    Sales();
    Sales(string n, int id, double s, float g, float c);
    ~Sales();
};