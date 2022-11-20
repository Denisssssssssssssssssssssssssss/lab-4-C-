#include "transport.h"
#include <iostream>

//����������� ������  ��� ����������
transport::transport() {
	trcost = 0;
	trtitle = "-";
}

//����������� ������  � ����� ����������
transport::transport(int allfields) {
	if (allfields >= 0) {
		trcost = allfields;
		trtitle = to_string(allfields);
	}
	else {
		cout << "���� ������� ������������ �������� allfields (allfields < 0)." << endl;
		transport tran;
		*this = tran;
	}
}

//����������� ������  �� ����� �����������
transport::transport(string trtitle, int trcost) {
	this->trtitle = trtitle;
	if (trcost >= 0)
		this->trcost = trcost;
	else {
		cout << "���� ������� ������������ �������� trcost (trcost < 0)." << endl;
		this->trcost = 0;
	}
}

//����� �����
void transport::input() {
	cout << "������� ��� ����������: ";
	getline(cin, trtitle);
	cout << "������� ������� �� ��������: ";
	cin >> trcost;
}

//����� ������
void transport::output() {
	cout << "���������: " << trtitle << endl;
	cout << "��������� ���������������: " << trcost << endl;
}