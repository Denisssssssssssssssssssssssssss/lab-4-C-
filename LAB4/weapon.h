#pragma once
#include <string>
using namespace std;

class weapon
{
	friend class employee;
private:
	string weptitle;
	int wepcost;
public:
	weapon();
	weapon(int allfields);
	weapon(string weptitle, int wepcost);
	void input();
	void output();
};

