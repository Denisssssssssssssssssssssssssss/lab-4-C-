#pragma once
#include <string>
using namespace std;

class transport
{
	friend class employee;
private:
	string trtitle;
	int trcost;
public:
	transport();
	transport(int allfields);
	transport(string trtitle, int trcost);
	void input();
	void output();
};

