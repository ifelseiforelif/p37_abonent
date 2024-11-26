#include "Abonent.h"
#include <iostream>

Abonent::Abonent(char* my_sn, long long my_phone, int d, int m, int y) :phone{ my_phone }, date{d,m,y}
{
	setSn(my_sn);
}

Abonent::~Abonent()
{
	if (sn != nullptr) 
	{
		delete[] sn;
	}
}

char* Abonent::getSn()
{
	return sn;
}

void Abonent::setSn(char* my_sn)
{
	if (sn != nullptr)
	{
		delete[] sn;
	}
	if (my_sn != nullptr)
	{
		sn = new char[strlen(my_sn) + 1];
		strcpy_s(sn, strlen(my_sn) + 1, my_sn);
	}
	else
	{
		sn = nullptr;
	}
}

long long Abonent::getPhone()
{
	return phone;
}

Abonent& Abonent::input()
{
	const int N = 100;
	char name[N];
	std::cout << "Enter surname and name: ";
	std::cin.getline(name, N - 1);
	std::cout << "Enter phone: ";
	long long phone;
	std::cin>> phone;
	int d, m, y;
	std::cout << "Enter day:";
	std::cin >> d;
	std::cout << "Enter month:";
	std::cin >> m;
	std::cout << "Enter year:";
	std::cin >> y;
	Abonent ab = { name, phone,d,m,y };
	return ab;
}

void Abonent::output()
{
	std::cout << "Surname and name:" << getSn() << std::endl;
	std::cout << "Phone:" << getPhone() << std::endl;
	std::cout << "Enter date:";
}
