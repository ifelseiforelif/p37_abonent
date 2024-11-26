#pragma once
#include "Date.h"

class Abonent
{
private:
	char* sn;
	const long long phone;
	Date date;
public:
	Abonent(char* my_sn, long long my_phone, int d, int m, int y);
	~Abonent();
	char* getSn();
	void setSn(char* my_sn);
	long long  getPhone();
	static Abonent& input();
	void output();


};

