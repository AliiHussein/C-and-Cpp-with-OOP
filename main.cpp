#include <iostream>
using namespace std;
#include <string>
#include "Sales.h"
#include "Engineer.h"

int main(){
    Engineer s1("Ali", 16760, 15000.0, "Embedded", 1, 2, 100.0);
    s1.print();
    return 0;
}