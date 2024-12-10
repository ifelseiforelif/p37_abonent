#pragma once

/*
Створіть клас Array (або використовуйте раніше створений вами).
Клас Array — це клас динамічного масиву.
Розмір масиву може бути переданий як параметр або
заданий за допомогою виклику функції-члена.
Клас повинен дозволяти заповнювати масив значеннями,
відображати вміст масиву, змінювати розмір масиву, сортувати
масив, визначати мінімальне і максимальне значення.
Клас повинен містити набір конструкторів (конструктор
копіювання обов’язковий), деструктор.*/

class MyArray
{
private:
	unsigned int size;
	int* arr;
public:
	MyArray(); //Конструктор за замовчуванням
	MyArray(unsigned int size);
	MyArray(unsigned int size, int* arr);
	void printArray() const;
	void setSize(unsigned int size);
	unsigned int getSize() const;
	MyArray(const MyArray& obj); //конструктор копіювання
	~MyArray(); //Деструктор

};

