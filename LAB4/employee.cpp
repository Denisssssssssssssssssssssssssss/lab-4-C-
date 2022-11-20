#include "employee.h"
#include <string>
#include <stdio.h>
#include <iostream>

//исходное значение поля counter
int employee::counter = 0;

//конструктор класса employee без параметров
employee::employee() {
	counter++;
	id = counter;
	equipment equip;
	jobtitle jtitle;
	transport tran;
	weapon weap;
	this->jtitle = jtitle;
	this->equip = equip;
	this->tran = tran;
	this->weap = weap;
}

//конструктор класса employee с одним параметром
employee::employee(int allfields) {
	counter++;
	id = counter;
	if (allfields >= 0) {
		equipment equip(allfields);
		this->equip = equip;
		jobtitle j(allfields);
		this->jtitle = jtitle;
		transport tran(allfields);
		this->tran = tran;
		weapon weap(allfields);
		this->weap = weap;
	}
	else {
		cout << "Было введено недопустимое значение allfields (allfields < 0)." << endl;
		equipment equip;
		jobtitle jtitle;
		transport tran;
		weapon weap;
		this->jtitle = jtitle;
		this->equip = equip;
		this->tran = tran;
		this->weap = weap;
	}
}

//конструктор класса employee со всеми параметрами
employee::employee(jobtitle jitle, equipment equip, transport tran, weapon weap) {
	counter++;
	id = counter;
	this->equip = equip;
	this->jtitle = jtitle;
	this->tran = tran;
	this->weap = weap;
}

//метод полного вывода employee
void employee::output() {
	cout << "ID: " << this->id << endl;
	jtitle.output();
	equip.output();
	tran.output();
	weap.output();
}

//метод ввода employee
void employee::input() {
	cout << "Введите ID: ";
	cin >> this->id;
	while (getchar() != '\n');
	jtitle.input();
	while (getchar() != '\n');
	equip.input();
	while (getchar() != '\n');
	tran.input();
	while (getchar() != '\n');
	weap.input();
}

//метод подсчета затрат
int employee::empcost() {
	int salary = 0; //затарты
	salary += jtitle.monthcost + equip.cost;
	return salary;
}

//метод вывода поля counter
void employee::printcounter() {
	cout << "Количество работников: " << counter << endl;
}

//метод уменьшиющий значение поля counter на 1
void employee::minuscounter() {
	counter--;
	cout << "Количество работников уменьшено на 1." << endl;
}

//метод уменьшающий значение поля counter на заданное значение
void employee::minuscounter(int number) {
	int x = counter;
	counter = counter - number;
	cout << "Количество работников изменено с " << x << " на " << counter << endl;
}

//перегрузка оператора +
employee employee::operator + (employee e1) {
	id = id + e1.id;
	return *this;
}

//перегрузка оператора ++ префиксный
employee& employee::operator++() {
	id++;
	return *this;
}

//перегрузка оператора ++ постфиксный
employee employee::operator++(int) {
	employee temp = *this;
	++* this;
	return temp;
}

//метод, возвращающий значение через указатель
employee* employee::get() {
	return this;
}

//метод, возвращающий значение через ссылку
employee& employee::getadress() {
	return *this;
}