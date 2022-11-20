#include "employee.h"
#include <conio.h>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <iostream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int years = 10;
    int armyyears = 1;
    int materyears = 0;
    string str = "Старший Охранник";
    jobtitle jt1;
    jobtitle jt2(10);
    jobtitle jt3(str,100000);
    equipment equ1;
    equipment equ2(10);
    equipment equ3("Дубинка", 5000);
    employee emp1;
    employee emp2(10);
    employee emp3(jt3,equ3,1,1);
    employee* emp4;
    employee* emp5 = new employee;
    emp4 = emp3.get();
    *emp5 = emp3.getadress();
    string jobt1 = "Охранник";
    string jobt2 = "Охранник водитель";
    string jobt3 = "Охранник командир";
    jobtitle a1(jobt1, 1);
    jobtitle a2(jobt2, 2);
    jobtitle a3(jobt3, 3);
    jt3.editjtitle("Менеджер", "Старший");
    jt3.output();
    emp3.printcounter();
    emp3.minuscounter();
    emp3.minuscounter(2);
    cout << "Разница стоимости экипировки и зарплаты в процентах: " << costcomparison(jt3, equ3) << endl;
    return 0;
}

