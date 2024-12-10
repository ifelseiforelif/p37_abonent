#include "Worker.h"
#include <iostream>

Worker::Worker()
{
	name = nullptr;
	salary = 0;
}

Worker::Worker(char* name, int salary)
{
	if (name == nullptr)
	{
		this->name = nullptr;
		this->salary = 0;
	}
	else
	{
		int size = strlen(name);
		this->name = new char[size + 1];
		strcpy_s(this->name, size + 1, name);
		if (salary >= 0)
		{
			this->salary = salary;
		}
		else
		{
			this->salary = 0;
		}
	}

}

Worker::~Worker()
{
	if (name != nullptr)
		delete[] name;
}

Worker::Worker(const Worker& obj)
{
	this->salary = obj.salary;
	if (obj.name != nullptr) //Глибоке копіювання
	{
		int size = strlen(obj.name);
		this->name = new char[size + 1];
		strcpy_s(this->name, size + 1, obj.name);
	}
	else
	{
		this->name = obj.name;
	}
}

char* Worker::getName() const
{
	return name;
}

int Worker::getSalary() const
{
	return salary;
}

void Worker::setSalary(int n)
{
	if (n >= 0)
		salary = n;
	else
		salary = 0;
}

void Worker::setName(char* name)
{
	if (this->name != nullptr)
	{
		delete[] this->name;
	}
	if(name != nullptr) //Глибоке копіювання
	{
		int size = strlen(name);
		this->name = new char[size + 1];
		strcpy_s(this->name, size + 1, name);
	}
	else
	{
		this->name = name;
	}
}

Worker& Worker::operator+(int value)
{
	this->salary += value;
	return *this;
}

Worker& Worker::operator-(int value)
{
	this->salary -= value;
	return *this;
}

Worker& Worker::operator=(const Worker& obj)
{
	this->salary = obj.salary;
	if (this->name != nullptr)
	{
		delete[] this->name;
	}
	if (obj.name != nullptr) //Глибоке копіювання
	{
		int size = strlen(obj.name);
		this->name = new char[size + 1];
		strcpy_s(this->name, size + 1, obj.name);
	}
	else
	{
		this->name = name;
	}
	return *this;
}

bool Worker::operator>(int n)
{
	if(salary>n)
		return true;
	return false;
}
