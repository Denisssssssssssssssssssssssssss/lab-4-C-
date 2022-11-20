#include "transport.h"
#include <iostream>

//конструктор класса  без параметров
transport::transport() {
	trcost = 0;
	trtitle = "-";
}

//конструктор класса  с одним параметром
transport::transport(int allfields) {
	if (allfields >= 0) {
		trcost = allfields;
		trtitle = to_string(allfields);
	}
	else {
		cout << "Было введено недопустимое значение allfields (allfields < 0)." << endl;
		transport tran;
		*this = tran;
	}
}

//конструктор класса  со всеми параметрами
transport::transport(string trtitle, int trcost) {
	this->trtitle = trtitle;
	if (trcost >= 0)
		this->trcost = trcost;
	else {
		cout << "Было введено недопустимое значение trcost (trcost < 0)." << endl;
		this->trcost = 0;
	}
}

//метод ввода
void transport::input() {
	cout << "Введите тип транспорта: ";
	getline(cin, trtitle);
	cout << "Введите затраты на траспорт: ";
	cin >> trcost;
}

//метод вывода
void transport::output() {
	cout << "Транспорт: " << trtitle << endl;
	cout << "Стоимость транспортировки: " << trcost << endl;
}