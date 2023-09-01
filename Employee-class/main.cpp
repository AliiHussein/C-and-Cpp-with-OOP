#include <iostream>
using namespace std;
#include <string>
#include "Sales.h"
#include "Engineer.h"
#include "Employee.h"

int main(){
    Engineer e1("Ali", 16760, 15000.0, "Embedded", 1, 2, 100.0);
    Sales s1("Omar", 2412, 16000.0, 1000.0, 0.10);
    
    Employee * ptr; // using polymorphism (one variable can take multiple shapes)

    ptr = &e1;
    ptr->print();
    cout << "Total Salary= "<< ptr->get_total_salary() << endl;

    cout << endl;

    ptr = &s1; 
    ptr->print(); 
    cout << "Total Salary= "<< ptr->get_total_salary() << endl;

    return 0;
}