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
	Worker(char* name, int salary); //�����������
	~Worker(); //����������
	Worker(const Worker& ); //����������� ���������
	char* getName() const; 
	int getSalary()const;
	void setSalary(int);
	void setName(char* name);
	Worker& operator+(int); //�������������� ��������� +
	Worker& operator-(int);//�������������� ��������� -
	Worker& operator=(const Worker&);
	bool operator>(int);
	/*friend ostream& operator<<(ostream& my_cout, const Worker& obj);
	friend istream& operator>>(istream& my_cin, Worker& obj);*/
};


