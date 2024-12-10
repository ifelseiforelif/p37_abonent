#include <iostream>
#include "Worker.h"
using namespace std;

ostream& operator<<(ostream& my_cout, const Worker& obj)
{
	my_cout << "Name: " << obj.getName() << endl;
	my_cout << "Salary: " << obj.getSalary() << endl;
	return my_cout;
}

istream& operator>>(istream& my_cin, Worker& obj)
{
	const int N = 20;
	char name[N];
	int salary;
	cout << "Enter name:";
	my_cin >> name;
	obj.setName(name);
	cout << "Enter salary:";
	my_cin >> salary;
	obj.setSalary(salary);
	return my_cin;
}

void test(Worker obj)
{
	cout << obj;
}

int main()
{
	Worker w1;
	cin >> w1;
	cout << w1;
	Worker w2;
	cin >> w2;
	cout << w2;
	w1 = w2; //оператор присвоення з копіюванням

	Worker w3 = w1; //конструктор копіювання

	
	/*const int N = 20;
	char name[N];
	int salary;
	cout << "Enter name:";
	cin >> name;
	cout << "Enter salary:";
	cin >> salary;
	Worker worker1 = { name, salary };
	cout << worker1;
	worker1 + 100;
	cout << worker1;

	Worker worker2;
	cin >> worker2;
	cout << worker2;
	if (worker2 > 100)
	{
		cout << "SALARY > 100";
	}*/
	

	return 0;
}