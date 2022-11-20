#pragma once
#include <string>
using namespace std;

class equipment;

class jobtitle
{
	friend class employee;
	friend float costcomparison(jobtitle jtitle, equipment equip);
public:
	jobtitle(string jtitle, int monthcost);
	jobtitle(int allfields);
	jobtitle();
	void input();
	void output();
	jobtitle operator + (jobtitle j1);
	jobtitle& operator++(); //����������
	jobtitle operator++(int); //�����������
	jobtitle* get(); //�����, ������������ �������� ����� ���������
	jobtitle& getadress(); //�����, ������������ �������� ����� ������
	void editjtitle(string jtitle, string add);
private:
	string jtitle; //������������ ���������
	int monthcost; //��������
};
