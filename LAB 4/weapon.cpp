#include "weapon.h"
#include <iostream>

//����������� ������  ��� ����������
weapon::weapon() {
	wepcost = 0;
	weptitle = "-";
}

//����������� ������  � ����� ����������
weapon::weapon(int allfields) {
	if (allfields >= 0) {
		wepcost = allfields;
		weptitle = to_string(allfields);
	}
	else {
		cout << "���� ������� ������������ �������� allfields (allfields < 0)." << endl;
		weapon weap;
		*this = weap;
	}
}

//����������� ������  �� ����� �����������
weapon::weapon(string weptitle, int wepcost) {
	this->weptitle = weptitle;
	if (wepcost >= 0)
		this->wepcost = wepcost;
	else {
		cout << "���� ������� ������������ �������� trcost (wepcost < 0)." << endl;
		this->wepcost = 0;
	}
}

//����� �����
void weapon::input() {
	cout << "������� ��� ����������: ";
	getline(cin, weptitle);
	cout << "������� ������� �� ���������� : ";
	cin >> wepcost;
}

//����� ������
void weapon::output() {
	cout << "����������: " << weptitle << endl;
	cout << "��������� ����������: " << wepcost << endl;
}