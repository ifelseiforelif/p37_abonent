#pragma once
#include <iostream>
using namespace std;
class Worker
{
private:
	char* name;
	int salary;
public:
	Worker();
	Worker(char* name, int salary); //конструктор
	~Worker(); //деструктор
	Worker(const Worker& ); //конструктор копіювання
	char* getName() const; 
	int getSalary()const;
	void setSalary(int);
	void setName(char* name);
	Worker& operator+(int); //перевантаження оператора +
	Worker& operator-(int);//перевантаження оператора -
	Worker& operator=(const Worker&);
	bool operator>(int);
	/*friend ostream& operator<<(ostream& my_cout, const Worker& obj);
	friend istream& operator>>(istream& my_cin, Worker& obj);*/
};


