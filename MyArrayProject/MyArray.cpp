#include "MyArray.h"
#include <iostream>
using namespace std;

MyArray::MyArray()
{
	this->size = 0;
	this->arr = nullptr;
}

MyArray::MyArray(unsigned int size)
{
	this->size = size;
	if (size > 0)
	{
		this->arr = new int[this->size] {};
	}
	else
	{
		
		this->arr = nullptr;
	}

}

MyArray::MyArray(unsigned int size, int* arr)
{
	this->size = size;
	if (size > 0)
	{
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = arr[i];
		}
	}
	else
	{
		this->arr = nullptr;
	}
	
}

void MyArray::printArray() const
{
	if (this->size > 0)
	{
		for (int i = 0; i < this->size; i++)
		{
			cout << this->arr[i] << ' ';
		}
		cout << endl;
	}
	else
	{
		cout << "Empty Array(\n";
	}
}

void MyArray::setSize(unsigned int size)
{
	//TODO: Реалізувати
	this->size = size;
}



unsigned int MyArray::getSize() const
{
	return this->size;
}

MyArray::MyArray(const MyArray& obj)
{
	this->size = obj.size;
	if (this->size > 0)
	{
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}
	else
	{
		this->arr = nullptr;
	}
}

MyArray::~MyArray()
{
	if (this->arr != nullptr)
	{
		delete[] arr;
	}
}
