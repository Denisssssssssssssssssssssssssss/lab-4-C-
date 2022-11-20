#pragma once
#include <string>
using namespace std;

class jobtitle;

class equipment
{
	friend class employee;
	friend float costcomparison(jobtitle jtitle, equipment equip);
public:
	equipment(string eqtitle, int cost);
	equipment(int allfields);
	equipment();
	void input();
	void output();
	equipment operator + (equipment e1);
	equipment& operator++(); //����������
	equipment operator++(int); //�����������
	equipment* get(); //�����, ������������ �������� ����� ���������
	equipment& getadress(); //�����, ������������ �������� ����� ������
private:

	string eqtitle; //������������ ����������
	int cost; //��������� ����������
};

