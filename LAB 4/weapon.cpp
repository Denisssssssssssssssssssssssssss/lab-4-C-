#include "weapon.h"
#include <iostream>

//конструктор класса  без параметров
weapon::weapon() {
	wepcost = 0;
	weptitle = "-";
}

//конструктор класса  с одним параметром
weapon::weapon(int allfields) {
	if (allfields >= 0) {
		wepcost = allfields;
		weptitle = to_string(allfields);
	}
	else {
		cout << "Было введено недопустимое значение allfields (allfields < 0)." << endl;
		weapon weap;
		*this = weap;
	}
}

//конструктор класса  со всеми параметрами
weapon::weapon(string weptitle, int wepcost) {
	this->weptitle = weptitle;
	if (wepcost >= 0)
		this->wepcost = wepcost;
	else {
		cout << "Было введено недопустимое значение trcost (wepcost < 0)." << endl;
		this->wepcost = 0;
	}
}

//метод ввода
void weapon::input() {
	cout << "Введите тип вооружения: ";
	getline(cin, weptitle);
	cout << "Введите затраты на вооружение : ";
	cin >> wepcost;
}

//метод вывода
void weapon::output() {
	cout << "Вооружение: " << weptitle << endl;
	cout << "Стоимость вооружения: " << wepcost << endl;
}